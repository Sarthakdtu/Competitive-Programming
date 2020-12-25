#include<bits/stdc++.h>
using namespace std;


typedef long long ll;

int main(){
    int T;
    cin>>T;
    while(T--){
        string str;
        cin>>str;
        int idx[4];
        idx[1] = -1, idx[2] = -1, idx[3] = -1;
        int len=0;
        int mlen = INT_MAX;
        for(int i=0;i<str.size();i++){
            idx[str[i]-'0'] = i;
            if(idx[1] != -1&& idx[2] != -1&& idx[3] != -1){
                //cout<<idx[1]<<idx[2]<<idx[3]<<endl;
                int si = min(min(idx[1], idx[2]), idx[3]);
                int li = max(max(idx[1], idx[2]), idx[3]);
                len = li - si +1;
                mlen = min(len, mlen);
            }
        }
        if(mlen==INT_MAX)
            mlen = 0;
        cout<<mlen<<endl;
    }
    return 0;
}