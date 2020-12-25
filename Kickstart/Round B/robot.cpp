#include<bits/stdc++.h>
using namespace std;

int main(){

    int T;
    cin>>T;
    for(int t=1;t<=T;t++){
        int w, h, l, u, r, d;
        cin>>w>>h>>l>>u>>r>>d;
        
        bool b[h+1][w+1];
        memset(b, true, sizeof(b));
        for(int i=u;i<=d;i++){
            for(int j=l;j<=r;j++){
                b[i][j] = false;
            }
        }
        double p=0.0;
        int currj=1;
        for(int i=2;i<=h;i++){
            for(int j=currj;j<=w;j++){
                if(j==currj && !b[i][j]){
                    p += pow(0.5, j-1);
                    break;
                }
                if(j!=w && !b[i][j] && b[i-1][j]){
                    p += pow(0.5, j-1);  
                    break;                  
                }
            }
        }
       


        cout<<"Case #"<<t<<": "<<day<<endl;        
    }
    return 0;
}