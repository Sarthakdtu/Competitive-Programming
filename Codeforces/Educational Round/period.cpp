#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){

    int T;
    cin>>T;
    while(T--){
        string s;
        cin>>s;
        bool flag = true;
        for(int i=1;i<s.size();i++){
            if(s[i]!=s[i-1]){
                flag = false;
                break;
            }
        }
        if(flag){
            cout<<s<<endl;
            continue;
        }
        else{
            flag = true;
            for(int i=0;i<s.size()-2;i++){
                if(s[i]!=s[i+2]){
                    flag = false;
                    break;
                }
            }
            if(flag){ 
                cout<<s<<endl;
                //continue;
            }
            else{
                for(int i=0;i<2*s.size();i++){
                    cout<<flag;
                    flag = !flag;
                }
                cout<<endl;
            }
        }
    }
    return 0;
}
