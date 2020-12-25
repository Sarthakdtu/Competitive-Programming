#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        ll a=0, b=0;
        int fr = 0;
        int re = n-1;
        bool tu = true;

        ll curr=0;
        ll prev = 0;
        ll moves = 0;
        while(fr<n && re>-1 && fr<=re){
            moves++;
            curr=0;
            if(tu){
               // cout<<"A ";
                while(curr<=prev && fr<=re && fr<n && re>=0 && arr[fr]!=-1){
                    //cout<<"Eating "<<arr[fr]<<endl;
                    curr += arr[fr];
                    arr[fr] = -1;
                    fr++;
                }
                a+=curr;
            }
            else{
                //cout<<"B ";
                while(curr<=prev && re>=fr && fr<n && re>=0 && arr[re]!=-1){
                    //cout<<"Eating "<<arr[re]<<endl;
                    curr += arr[re];
                    arr[re] = -1;
                    re--;
                }
                b+=curr;

            }
            prev = curr;
            tu =!tu;
            if(arr[fr]==-1 || arr[re]==-1)
                break;
        }


        
    cout<<moves<<" "<<a<<" "<<b<<endl;
        
    }   

    return 0;

}