#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        int arr[1000][1000];
        for(int i=0;i<n;i++){   
            cin>>s;
            for(int j=0;j<n;j++){
                arr[i][j] = s[j]-'0';
            }

        }
        // cout<<n<<endl;
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<n;j++){
        //       cout<<arr[i][j]<<" ";
        //         //cout<<arr[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        //cout<<"tt";
       bool flag = true;
       for(int i=0;i<n-1;i++){
           for(int j=0;j<n-1;j++){
                if(arr[i][j]==1){
                    if(arr[i][j+1]==0 && arr[i+1][j]==0){
                        flag = false;
                        //cout<<"tttttt";
                        break;
                    }
                }
           }
           if(!flag){
               break;
           }
       }
       //cout<<"ttt";

       if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

        
    



    }


    return 0;
}
        
       