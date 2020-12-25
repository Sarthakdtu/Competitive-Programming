#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i =0;i<n;i++){
            cin>>arr[i];
        }
        bool ans = true;
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                continue;
            }
            else {
                int count=0;
                i++;
                while(i<n && arr[i]==0){
                    count++;
                    i++;
                    if(count==5)
                        break;
                }
                //cout<<i<<" , ";
                if(i<n && count<5){
                    ans = false;
                    break;
                }
                if(i<n && arr[i])
                    i--;
                //cout<<count<<", ";
            }
        }
        if(ans)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
    return 0;
}