#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll m = 998244353;
ll exponentiation(long int base,  long int exp) 
{ 
    if (exp == 0) 
        return 1; 
  
    if (exp == 1) 
        return base % m; 
  
    long int t = exponentiation(base, exp / 2); 
    t = (t * t) % m; 
  
    if (exp % 2 == 0) 
        return t; 
  // if exponent is odd value 
    else
        return ((base % m) * t) % m; 
} 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll arr[n];
        int f=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];  
            if(arr[i]==1)
                f++;   
        }
        ll ans=0;
        sort(arr, arr+n);
        
        if(f==0){
            ans = exponentiation(2, n);
        }
        else{
            ans = exponentiation(2, n-f);
            ll curr = 2;
            for(int i=f+1;i<n;i++){
                if(curr==arr[i])
                    curr++;
                ans += curr*exponentiation(2, i-1);
            }
        }
    }
    return 0;
}