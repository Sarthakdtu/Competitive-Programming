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
    map<int, int> po;
    for(int i=2;i<100001;i*=2){
        po[i] = 1;
    }
    while(t--){
    	int n;
    	cin>>n;
        if(po[n]){
            cout<<"-1"<<endl;
            continue;
        }
        else if(n>5){
            vector<int> ans;
            ans.push_back(1);
            ans.push_back(3);
            ans.push_back(2);
            ans.push_back(6);
            ans.push_back(4);
            ans.push_back(5);
            int num = 7;
            for(int i=6;i<n;i++){
                ans.push_back(num);
                if(po[num+1]==1){
                    ans.push_back(num+2);
                    ans.push_back(num+1);
                    i+=2;
                    num += 2;
                }
                num++;
            }
            for(int i=0;i<n;i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
        else{
            if(n==1){
                cout<<"1";
            }
            else if(n==3){
                cout<<"1 3 2";
            }
            else if(n==5){
                cout<<"2 3 1 5 4";
            }
            cout<<endl;
        }
        }

    return 0;
}