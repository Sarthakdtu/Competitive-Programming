#include<bits/stdc++.h>
using namespace std;

int main(){
   
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int score[n];
        int mv = 0;
        int sum = 0;
        int curr = 0;
        int oa = 0;
        int oamv = 0;
        for(int i=0;i<n;i++){
            oa += arr[i];
           
            curr += arr[i];
            if(mv<arr[i]){
                curr += mv;
                curr -= arr[i];
                mv = arr[i];
                if(oa>0 && oamv<=mv){
                    curr = oa - arr[i];
                }
            }
            
            //cout<<curr<<" ";
            if(curr<0){
                curr = 0;
                mv = 0;
            }
            if(oa<0){
                oa = 0;
                oamv = 0;
            }
            sum = max(sum, curr);
             oamv = max(oamv, arr[i]);
        }
        if(sum<0)
            sum = 0;
    
        cout<<sum<<endl;





    return 0;
}