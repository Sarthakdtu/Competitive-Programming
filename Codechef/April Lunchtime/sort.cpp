#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

struct num{
    ll e;
    int f;
};

int bs(ll arr[], int l, int r, ll x) 
{ 
    while (l <= r) { 
        int m = l + (r - l) / 2; 
  
        if (arr[m] == x){
            //if(arr[m].f ==x.f)
                return m;
        }  
        else if (arr[m]< x) 
            l = m + 1; 
        else
            r = m - 1; 
    } 
    return -1; 
} 

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int k;
        cin>>k;
        ll arr[n];
        vector<int> so(n);
        //vector<vector<int> > li(k);
        for(int i=0;i<n;i++){
             cin>>arr[i];
             so[i] = arr[i];
        }
        if(k==1){
            cout<<"yes"<<endl;
            continue;
        }
        sort(so.begin(), so.end());
        //map<ll, int> vis;
        bool flag = true;

        for(int i=0;i<n;i++){
            ll nu = arr[i];
            int l = lower_bound(so.begin(), so.end(), nu) - so.begin();
            int u = upper_bound(so.begin(), so.end(), nu) - so.begin();
            if(l==u){
                if( abs(i- l) % k != 0){
                    //continue;
                    flag = false;
                    break;
                }
                continue;
            }
            if(u - l + 1 >=k){
                continue;
            }
            int ir = i%k;
            int ur = u%k;
            int lr = l%k;
            int maxr = max(lr, ur);
            int minr = min(ur, lr);

            if(ir<=maxr && ir>=minr){
                continue;
            }
            else{
                flag  = false;
                break;
            }
            
        }

        if(flag){
            cout<<"yes";
        }
        else{
            cout<<"no";
        }

        cout<<endl;
    }
    return 0;
}