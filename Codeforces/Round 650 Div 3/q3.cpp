#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
 
#define pb  push_back

#define mod 1000000007
#define INF 1e18
typedef  long long ll;
void c_p_c()
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
    c_p_c();
    int t;
    cin>>t;
    while(t--){
    	int n, k;
    	cin>>n>>k;
    	string arr;
        cin>>arr;

        int count = 0;
        for(int i=0;i<n;i++){
            if(arr[i]=='0'){
                bool flag = true;
                int j;
                for(j=i+1;j<i+k+1 &&j<n;j++){
                    if(arr[j]=='1'){
                        //cout<<" uh "<<j<<" ";
                        flag = false;
                        break;
                    }
                }
                if(flag){
                    //cout<<"can be"<<" ";
                    count++;                    
                }
                //cout<<i<<" ";
                i = j-1;

                //cout<<"going to "<<i+1<<endl;
            }
            else if(arr[i]=='1'){
                i += k;
            }

        }
        cout<<count<<endl;
        







    }
    return 0;
}