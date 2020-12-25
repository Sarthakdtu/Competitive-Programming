#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){

    int T;
    cin>>T;
    for(int t=1;t<=T;t++){
        //string ans ="";
        ll x, y, x_, y_;
        cin>>x_>>y_;
        x = abs(x_);
        y = abs(y_);
        string ans="IMPOSSIBLE";
        if((x==0 && y==1)){
            ans = "N";
        }
        else if((x==1 && y==0)){
            ans = "E";
        }
        else if((x==1 && y==2)){
            ans = "EN";
        }
        else if((x==2 && y==1)){
            ans = "NE";
        }
        else if((x==1 && y==4)){
            ans = "WEN";
        }
        else if((x==4 && y==1)){
            ans = "SNE";
        }
        else if((x==3 && y==2)){
            ans = "WNE";
        }
        else if((x==2 && y==3)){
            ans = "SEN";
        }
        else if((x==3 && y==4)){
            ans = "EEN";
        }
        else if((x==4 && y==3)){
            ans = "NNE";
        }
        else if(x==0 && y==3){
            ans = "NN";
        }
        else if(x==3 && y==0){
            ans = "EE";
        }
 

        if(ans!= "IMPOSSIBLE" && x_<0){
            for(int i=0;i<ans.size();i++){
                if(ans[i]=='E')
                    ans[i] = 'W';
                else if(ans[i]=='W')
                    ans[i] = 'E';
            }
        }
        if(ans!= "IMPOSSIBLE" && y_<0){
            for(int i=0;i<ans.size();i++){
                if(ans[i]=='N')
                    ans[i] = 'S';
                else if(ans[i]=='S')
                    ans[i] = 'N';
            }
        }

        cout<<"Case #"<<t<<": "<<ans<<endl;
    }


return 0;
}
