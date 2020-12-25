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
        int arr[100001] = {INT_MAX};
        arr[0] = y;
        for(int i=1;i<path.size()+1;i++){
            if(path[i-1]=='S')
                arr[i] = arr[i-1] - 1;
            else if(path[i-1]=='N')
                arr[i] = arr[i-1] + 1; 
        }

        int ans_mins = x;
        bool flag = false;
        int my = 0;
        int py = arr[x];
        int tleft = path.size() - x;
        //cout<<"P is at "<<arr[x]<<" and I am at "<<0<<endl;
        if(tleft<0)
            ans = "IMPOSSIBLE";
        else{
            if(arr[x] == my){
                flag = true;
            }
            if(!flag)
            for(int time = 0;time<tleft+1;time++){
                if(time>=arr[x + time] && (-1 * time) <= arr[x+time]){
                    ans_mins = x + time;
                    flag = true;
                    break;
                }
            }
            if(!flag){
                ans ="IMPOSSIBLE";
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
