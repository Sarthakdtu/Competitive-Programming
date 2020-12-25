#include<bits/stdc++.h>
using namespace std;

struct res{
 string rem;
 int pos;
};

res func(string &s, int idx){
    if(idx>=s.size()){
        return {"", s.size()};
    }
    int n = s[idx] - '0';
    //cout<<"N is "<<n<<endl;
    string op="";
    res in;
    int open=0, close=0;
    for(int i=idx+1;i<s.size();i++){
        if( s[i]=='N' || s[i]=='E'||s[i]=='S'||s[i]=='W'){
            op += s[i];
            //cout<<"OP is "<<op<<endl;
        }
        else if(s[i]=='('){
            open++;
        }
        else if(s[i]==')'){
            open--;
            close = i;
            if(open==0)
                break;
        }
        else{
            in = func(s, i);
            i = in.pos;
            op += in.rem;
        }
    }
    
    string fop ="";
    for(int i=0;i<n;i++){
        fop += op;
    }
    //cout<<"Returning final "<<fop<<endl;
    return {fop, close};
}

string func_stk(string s){
    stack<string> stk;
    string one = "";
    one  += '1';
    //cout<<one<<endl;
    stk.push(one);
    int i=0;
    string fop="";
    string in="", op="";
    while(i<s.size() && !stk.empty()){
        //stk.push(to_string(s[i]));     
        string top = stk.top();
        //stk.pop();   
        //cout<<"Top "<<top<<endl;
        if(top[0]==')'){
            //cout<<"yo"<<endl;
            stk.pop();
             in="", op="";
            while(!stk.empty()){
                if(stk.top()=="("){
                    stk.pop();
                    for(int i=0;i<stk.top()[0]-'0';i++){
                        op += in;                                                
                    }
                    stk.pop();
                    //reverse(op.begin(), op.end());
                    //cout<<"string is "<<op<<endl;
                    stk.push(op);
                    break;
                }
                in = stk.top() + in;
                stk.pop();
            }
            //fop += op;
        }
        else{
            i++;
            string str="";
            if(i<s.size() && s[i]=='('){
                stk.push("(");
                i++;
                int idx;
                for(idx = i;idx<s.size();idx++){
                    if( s[idx]=='N' || s[idx]=='E'||s[idx]=='S'||s[idx]=='W' )
                        str += s[idx];
                    else{
                       // cout<<"what ? "<<s[idx]<<endl;
                        i = idx-1;
                        break;
                    }
                }
                //i=idx;
                
                if(str!=""){
                    //cout<<"Inserting "<<str<<endl;
                    stk.push(str);
                }
            }
            else{
                //i++;
                if(i<s.size()){
                    //cout<<"found number "<<s[i]<<endl;
                    one = "";
                    stk.push(one + s[i]);
                }
            }
        }
    }
    fop = stk.top();
    return fop;
}


int main(){

    int T;
    cin>>T;
    for(int t=1;t<=T;t++){
        string s;
        cin>>s;
        s = "1(" + s + ")";
        //string s1 = func(s, 0).rem;
        s = func_stk(s);
        //cout<<(s==s1)<<endl;
        //cout<<s<<endl;
    
        long long w=1, h=1;
        for(int i=0;i<s.size();i++){
            if(s[i]=='N'){
                h--;
            }
            else if(s[i]=='W'){
                w--;
            }
            else if(s[i]=='E'){
                w++;
            }
            else{
                h++;
            }
            if(h==0){
                    h = 1000000000;
            }
            if(w==0){
                    w = 1000000000;
            }
            if(h>1000000000){
                    h = 1;
            }
            if(w>1000000000){
                    w = 1;
            }
            //cout<<w<<" "<<h<<endl;
        }
        cout<<"Case #"<<t<<": "<<w<<" "<<h<<endl;

    }

    return 0;
}