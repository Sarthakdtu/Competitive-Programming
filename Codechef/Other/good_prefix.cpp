#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int k, x, n;
        cin>>k>>x;
        n = str.size();
        int count = 0;
        vector<int> f(26, 0);
        for(int i=0;i<n;i++){
            bool flag = true;
            char ch = str[i];
            f[ch - 'a']++;
            for(int j=0;j<26;j++){
                if(flag && f[ch-'a']>x){
                    flag = false;
                    if(k>0){
                        //cout<<"deleting "<<ch<<" \n";
                        f[ch-'a']--;
                        k--;
                        count--;
                        flag = true;
                    }
                    //cout<<"can no longer delete\n";
                }
            }
            if(flag){
                count++;
            }
            else if(!flag && k==0){
                break;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}