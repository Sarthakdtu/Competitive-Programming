#include<bits/stdc++.h>
using namespace std;

int main(){

    int T;
    cin>>T;
    for(int t=1;t<=T;t++){
        string ans="";
        int x, y; //x east y north
        string path;
        cin>>x>>y;
        cin>>path;
        int up[10001];
        int le[10001];
        //memset(up, y, sizeof(up));
        //memset(le, x, sizeof(le));

        up[0] = y, le[0] = x;
        for(int i=1;i<path.size()+1;i++){
            if(path[i-1]=='S'){
                up[i] = up[i-1] - 1;
                le[i] = le[i-1];
            }
            else if(path[i-1]=='N'){
                up[i] = up[i-1] + 1;
                le[i] = le[i-1];
            } 
            else if(path[i-1]=='E'){
                le[i] = le[i-1] + 1;
                up[i] = up[i-1];
            }
            else if(path[i-1]=='W'){
                le[i] = le[i-1] - 1;
                up[i] = up[i-1];
            }
        }
        int ans_mins = 0;
        ans = "IMPOSSIBLE";
        for(int i=0;i<path.size()+1;i++){
            int csum = abs(up[i]) + abs(le[i]);
            //cout<<le[i]<<" "<<up[i]<<endl;
            if(csum<=i){
                //cout<<le[i]<<" "<<up[i]<<endl;
                ans_mins = i;
                ans = "";
                break;
            }
        }

        if(ans=="IMPOSSIBLE"){
             cout<<"Case #"<<t<<": "<<ans<<endl;
             continue;
        }
        cout<<"Case #"<<t<<": "<<ans_mins<<endl;

    }



    return 0;
}
