/*

*/

#include<bits/stdc++.h>
using namespace std;
#define for(i, n) for(int i=0;i<n;i++)
typedef long long ll;
int main() {
  int t;
  cin >> t;
  while(t--) {
    ll n;
    cin>>n;
    int arr[n];
    bool dis = false, dis_adj = true;
    for(i, n){
        cin>>arr[i];
    }
    for(i, n){
        int idx = (i+1)%n;
        if(arr[i]!=arr[idx])
            dis = true;
        if(arr[i] == arr[idx])
            dis_adj = false;
    }
    //cout<<"dis: "<<dis<<" , adj_dis: "<<dis_adj<<endl;
    if(dis){
        if(n&1){ //odd
            if(dis_adj){
                cout<<"3"<<endl;
                for(i, n-1){
                    cout<<(1+i%2)<<" ";
                }
                cout<<"3"<<endl;
            }
            else{
                bool flag = false;
                bool k = false;
                cout<<"2"<<endl;
                for(i, n){
                    //cout<<"bruh";
                    if(!flag && arr[i]==arr[(i+1)%n]){
                        cout<<(1+k)<<" ";
                        if(i+1!=n)
                            cout<<(1+k)<<" ";
                        flag = true;
                        i++;
                        k!=k;
                    }
                    else
                        cout<<(1+k)<<" ";
                        k = !k;
                }
                cout<<endl;
            }
        }
        else{
            cout<<"2"<<endl;
            for(i, n){
                cout<<(1 + i%2)<<" ";
            }
            cout<<endl;
        }
    }
    else{
        cout<<"1"<<endl;
        for(i, n){
            cout<<"1 ";
        }
        cout<<endl;
    }
  }
  return 0;
}