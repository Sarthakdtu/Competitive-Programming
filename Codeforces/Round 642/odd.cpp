#include<bits/stdc++.h>

using namespace std;
struct triplet{
    int f;
    int s;
    int len;
};

class Compare{
    public:
    bool operator()(triplet a, triplet b){
        if(a.len > b.len)
            return false;
        if(a.len == b.len)
            if(a.f < b.f)
                return false;
    return true;

    }
};

typedef long long ll;
ll m = (1000*1000*1000)  +7;
int main(){
int t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    int l, r, mid, prevl, prevr;
    int arr[n+1];

    priority_queue<triplet, vector<triplet>,  Compare> q;
    
    q.push({1, n, n});

     
    bool flag = true;
    int i=1;
    while(i<=n){
        triplet curr = q.top();
        q.pop(); 
        l = curr.f;
        r = curr.s;
        //cout<<"Inserting "<<i<<" "<<l<<" "<<r<<" ";
        if(l<1 || r>n || r<1 || l>n)
            continue;

        int len = curr.len;
        if(len&1){
            mid = (l+r)/2;
        }
        else{
            mid = (l+r-1)/2;
        }
        //cout<<mid<<endl;
        arr[mid] = i;
        i++;
        if(l!=r){
            //cout<<"Pushing "<<l<<" "<<mid-1<<" length "<<mid-1 -l +1<<endl;
            q.push({l, mid-1, mid-1 -l +1 });
        }
        if(l!=r){
            //cout<<"Pushing "<<mid+1<<" "<<r<<" length "<<r - (mid+1) +1<<endl;
            q.push({mid+1, r, r - (mid+1) +1 });
        }
            
    }
    //cout<<endl;
    for(int idx=1;idx<=n;idx++){
            cout<<arr[idx]<<" ";
    }
    
    cout<<endl;
    
}

return 0;

}