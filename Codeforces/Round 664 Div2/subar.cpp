#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18

typedef  long long ll;
void sarthak()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
        //freopen("error.txt", "w", stderr);
	#endif
}
 
int main()
{
    sarthak();
    int t;
    cin>>t;
    while(t--){
    	string s;
    cin>>s;
    int n=s.size();
    int a[n]={};
    int b[n]={};
    for(int i=0;i<n;i++){
      if(s[i]=='w' && i%2==1){
        a[i]++;
      }
      if(s[i]=='b' && i%2==0){
        a[i]++;
      }
      if(i!=0){
        a[i]+=a[i-1];
      }
    }
    for(int i=0;i<n;i++){
      if(s[i]=='w' && i%2==0){
        b[i]++;
      }
      if(s[i]=='b' && i%2==1){
        b[i]++;
      }
      if(i!=0){
        b[i]+=b[i-1];
      }
    }
    if(n%2==0){
      cout<<min(a[n-1],b[n-1])<<"\n";
    }else{
      ll ans=min(a[n-1],b[n-1]);
      for(int i=0;i<n-1;i++){
       ll temp=min(a[i]+b[n-1]-b[i],b[i]+a[n-1]-a[i]);
        ans=min(ans,temp);
      }
      cout<<ans<<"\n";
    }


    }

    return 0;
}