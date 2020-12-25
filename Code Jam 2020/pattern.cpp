#include<bits/stdc++.h>
using namespace std;

bool comp(string a, string b){
    return a.size()>b.size();
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
        //sort(str.begin(), str.end(), comp);
        bool poss = true;
        string ans = "";
        
        for(int i=0;i<n;i++){
            string org_str = str[i].substr(1);
            for(int j=0;j<n;j++){
                string new_str = str[j].substr(1);
                if(i==j)
                    continue;
                if(org_str.size()>=new_str.size()){
                     int oi=org_str.size()-1;
                     int ni = new_str.size()-1;
                     while(ni>-1){
                         if(new_str[ni]!=org_str[oi]){
                             ans = "*";
                             poss = false;
                             break;
                         }
                         oi--;
                         ni--;
                     }
                }
                if(!poss){
                    break;
            }
            }
            if(!poss){
                break;
            }
            if(org_str.size()>ans.size()){
                ans = org_str;
            }
        }

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
*/