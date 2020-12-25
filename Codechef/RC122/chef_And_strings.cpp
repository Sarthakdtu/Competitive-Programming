#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s.size()<3){
            cout<<"YES"<<endl;
            continue;
        }
        string rv = s.substr(1, s.size()) + s[0];
        string lv = s[s.size()-1] + s.substr(0, s.size()-1);
        if(rv == lv){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
        cout<<endl;

    }
    return 0;
}