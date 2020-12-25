#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll m = (1000*1000*1000) + 7;
int main(){

    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll arr[n];
        set<ll> s;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            s.insert(arr[i]);
        }

        set<ll> s2 = s;
        int idx = 0; int m=1;
        set<ll>:: iterator itr = s.begin();
        vector<ll> d;
        for(;itr!=s.end();itr++){
            ll elt = *itr;
            d.push_back(elt);
        }
        //int v=0;
         vector<ll>:: iterator v = d.begin();
        while(d.size()!=0){
            if(idx==n)
                m++;
            idx = idx % n; 
           
            ll elt = *itr;
            //cout<<*itr<<endl;
            //cout<<elt<<arr[idx]<<endl;
            if(arr[idx] == elt){
                cout<<*itr<<" ";
                d.erase(v);
            }
            idx++; 
        }

        cout<<m;
        cout<<endl;

    }
    return 0;
}