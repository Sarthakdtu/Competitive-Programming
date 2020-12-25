#include<bits/stdc++.h>

using namespace std;
typedef long ll;


int main(){
   ll a, b, c;
   cin>>a>>b>>c;
   ll k;
   cin>>k;
    ll ans = a;
   if(k<=a){
       ans = k;
       cout<<ans<<endl;
       return 0;
   } 
   k = k-a;
   if(k<=b){
       cout<<ans<<endl;
       return 0;
   }
   k = k-b;

   ans = ans - k;
   cout<<ans<<endl;




    return 0;
}