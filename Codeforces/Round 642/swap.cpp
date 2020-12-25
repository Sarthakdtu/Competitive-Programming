#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
int main(){
int t;
cin>>t;
while(t--){
    int n, k;
    cin>>n>>k;
    ll ans;
    int a[n], b[n];
    for(int i=0;i<n;i++)
            cin>>a[i];
        
        for(int i=0;i<n;i++)
            cin>>b[i];
    
    sort(b, b+n);
    sort(a, a+n);
    
    int i = 0;
    int j = n-1;
    int sum = 0;
    
    while(i<n && j>-1 && k>0){
        if(a[i]<b[j]){
            //cout<<"Swapping"<<a[i]<<" "<<b[j]<<endl;
            int temp = a[i];
            a[i] = b[j];
            b[j] = temp;
            k--;
            i++;
            j--;
            
        }
        else{
            break;
        }
    }

    for(int i=0;i<n;i++)
        sum += a[i];
    
    cout<<sum<<endl;

    

}

return 0;

}