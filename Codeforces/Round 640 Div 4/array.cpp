#include<bits/stdc++.h>
using namespace std;

bool func(int arr[], int size, int col)
{
    int curr = arr[0];
    int flag = 0;
    for(int idx = 1; idx <= size; idx++)
    {
        while(curr > col && flag < idx - 1)
        {
            curr = curr - arr[flag];
            flag++;
        }
        if(curr == col)
        {
            if(flag!=(idx-1))
                return true;
        }
        if(idx < size)
        curr = curr + arr[idx];
    }
    return false;
}

int main(){
    int t;
    cin>>t;
    for(int T=0;T<t;T++){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
         cin>>arr[i];
        }
        int num=0;
        for(int i=0;i<n;i++){
            if(func(arr,n,arr[i]))
            num++;
        }
        int ans = num;
        cout<<ans;
        cout<<endl;
    }
    return 0;
}