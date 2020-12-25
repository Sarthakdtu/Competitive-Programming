#include<bits/stdc++.h>
using namespace std;

int main(){

    int T;
    cin>>T;
    for(int t=1;t<=T;t++){
        int n, b;
        cin>>n>>b;
        int *arr = new int[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr, arr+n);
        int count = 0, i=0;
        while(b>=arr[i]){
       
             b = b-arr[i];
             count++;
             i++;
           
        }
        cout<<"Case #"<<t<<": "<<count<<endl;
    }

    return 0;
}