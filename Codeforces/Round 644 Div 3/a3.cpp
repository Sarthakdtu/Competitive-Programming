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
        sort(arr, arr+n);
        int even=0, odd=0;
        bool flag = false;
        for(int i=0;i<n;i++) {
            if(i!=n-1 && arr[i]+1==arr[i+1])
                flag = true;
           if(arr[i]&1)
                odd++;
            else
                even++;
        }

        if(odd%2== 0 && even%2==0){
            cout<<"YES"<<endl;
            continue;
        }
        else if(odd%2!= 0 && even%2!=0 && flag){
            cout<<"YES"<<endl;
            continue;
        }

        cout<<"NO"<<endl;
        

        
    



    }


    return 0;
}