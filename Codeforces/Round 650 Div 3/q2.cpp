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
	#endif
}
 
int main()
{
    c_p_c();
    int t;
    cin>>t;
    while(t--){
    	int n;
    	cin>>n;
    	int arr[n][2];
        int mm[4] = {0, 0, 0, 0};
        for(int i=0;i<n;i++){
            cin>>arr[i][0];
            arr[i][0] %= 2;  
            arr[i][1] = i%2;
            if(arr[i][0] != arr[i][1]){
                mm[arr[i][0]]++;
                mm[arr[i][1]+2]++;
            }
        }
       // cout<<mm[0]<<" "<<mm[2]<<endl;
        if(mm[0]==mm[2]){
            
            cout<<mm[0]<<endl;
        }
        else{
            cout<<-1<<endl;
        }

        







    }
    return 0;
}