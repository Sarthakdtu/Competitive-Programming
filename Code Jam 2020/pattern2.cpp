#include<bits/stdc++.h>
using namespace std;

string comp(string a, string b){
    if(a.size()>b.size()){
        return a;
    }
    return b;
}

int main(){
    int T;
    cin>>T;
    for(int t=0;t<T;t++){
        int n;
        cin>>n;
        vector<string> str(n);
        for(int i=0;i<n;i++){
            cin>>str[i];
        }
        string ans="";
        string first_half="", second_half="", max_first_half="", max_second_half="";
        bool poss = true;
        //sort(str.begin(), str.end(), comp);
        for(int i=0;i<n;i++){
            string org_str = str[i];
            for(int j=0;j<n;j++){
                if(i==j)
                    continue;
                string new_str = str[j];                
                int oi = 0;
                int ni = 0;
                first_half = "", second_half="";

                //first half
                while(oi<org_str.size() && ni<new_str.size() && org_str[oi]!='*' && new_str[ni]!='*'){
                    if(org_str[oi] != new_str[ni]){
                        poss = false;
                    }
                    first_half.push_back(org_str[oi]);
                    oi++;
                    ni++;
                    cout<<"Current F half "<<first_half<<endl;
                }
                if(!poss){
                    ans = "*";
                    break;
                }
                while(oi<org_str.size() && org_str[oi]!='*'){
                    first_half.push_back(org_str[oi]);
                    cout<<"Current F half "<<first_half<<endl;
                    oi++;

                }
                while(ni<new_str.size()&& new_str[ni]!='*'){
                    first_half.push_back(new_str[ni]);
                    cout<<"Current F half "<<first_half<<endl;
                    ni++;
                }
                max_first_half = comp(max_first_half, first_half);

                //second half
                oi = org_str.size()-1;
                ni = new_str.size()-1;
                while(oi>-1 && ni>-1 && org_str[oi]!='*' && new_str[ni]!='*'){
                    if(org_str[oi] != new_str[ni]){
                        poss = false;
                    }
                    second_half = org_str[oi] + second_half;
                    cout<<"Current S half "<<second_half<<endl;
                    oi--;
                    ni--;
                }
                if(!poss){
                    ans = "*";
                    break;
                }

                while(oi>-1 && org_str[oi]!='*'){
                   second_half = org_str[oi] + second_half;
                   cout<<"Current S half "<<second_half<<endl;
                    oi--;

                }
                while(ni>-1&& new_str[ni]!='*'){
                   second_half = new_str[ni] + second_half;
                   cout<<"Current S half "<<second_half<<endl;
                    ni--;
                }
                max_second_half = comp(max_second_half, second_half);

            }
            if(!poss){
                ans = "*";
                break;
            }
        }
        
        if(poss)
            ans = max_first_half + max_second_half;
        cout<<"Case #"<<t+1<<": "<<ans<<endl;
    }
    return 0;
} 

/*
2
5
*CONUTS
*COCONUTS
*OCONUTS
*CONUTS
*TS
2
*X
*ZX
1
4
H*O
HELLO*
*HELLO
HE*

*/