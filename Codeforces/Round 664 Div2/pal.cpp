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
    	ll arr[4];
    	int flag = 0;
    	int num = 0;

    	for(int i=0;i<4;i++){
    		cin>>arr[i];
    		if(flag==0 && arr[i]%2!=0){
    			//if(flag==0)
    				flag = 1;
    			// cout<<"?";
    		}
    		else if(flag==1 && arr[i]%2!=0){
    			flag = -1;
    			// cout<<flag;
    			// cout<<"0";
    		}
    		// cout<<flag;
    	}
    	// cout<<flag;
    	if(flag==0 || flag==1){
    		cout<<"Yes"<<endl;
    		continue;
    	}
    	// cout<<"N";
    	flag = 0;
    	for(int i=0;i<3;i++){
    		if(arr[i]==0){
    			flag = -1;
    		}
    		arr[i]--;
    	}

    	if(flag==-1){
    		cout<<"No"<<endl;
    		continue;
    	}
    	arr[3]+=3;
    	flag = 0;
    	for(int i=0;i<4;i++){
    		//cin>>arr[i];
    		if(flag==0 && arr[i]&1){
    			//if(flag==0)
    				flag = 1;
    			//num++;
    		}
    		else if(flag==1 && arr[i]&1){
    			flag = -1;
    			break;
    		}
    	}

    	if(flag==0 || flag==1){
    		cout<<"Yes"<<endl;
    		continue;
    	}
    	if(flag==-1){
    		cout<<"No"<<endl;
    		continue;
    	}
    	


    }

    return 0;
}