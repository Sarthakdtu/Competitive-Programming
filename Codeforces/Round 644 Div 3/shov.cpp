#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int> prime;
bool arr[100005];
int sieve(){
    memset(arr, true, sizeof(arr));
    for(int i=2;i<100001;i++){
        ll a = i;
        if(arr[a]){
            for(ll j = a*a;j<100001;j+=a){
                arr[j] = false;
            }
            

        prime.push_back(a);
        }
    }
    
}

int main(){
    sieve();
    int t;
    cin>>t;
    while(t--){
        ll n, k;
        cin>>n>>k;
        if(k>=n){
            cout<<1<<endl;
            continue;
        }
        if(k==1){
            cout<<n<<endl;
            continue;
        }
        bool flag = true;
        for(int i=100001;i>=1;i--){
            if(i>k)
                continue;
            int rem = n%i;
            int q = n/i;
            if(rem==0){
                cout<<q<<endl;
                break;
            }
        }
        

    }


    return 0;
}