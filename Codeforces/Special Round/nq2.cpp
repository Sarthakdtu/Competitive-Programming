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
    	int n;
    	cin>>n;
    	int arr[2*n];
    	vector<int> eve, odd;
    	for(int i=0;i<2*n;i++){
    		cin>>arr[i];
    		if(arr[i]&1)
    			odd.pb(i+1);
    		else
    			eve.pb(i+1);
    	}


    	if(eve.size()&1||odd.size()&1){
    		if(eve.size())
    		for(int i=0;i<eve.size()-1;i+=2){
    			cout<<eve[i]<<" "<<eve[i+1]<<endl;
    		}
    		if(odd.size())
    		for(int i=0;i<odd.size()-1;i+=2){
    			cout<<odd[i]<<" "<<odd[i+1]<<endl;
    		}

    	}
    	else{
    		int flag = 2;
    		if(eve.size()){
    			flag = 0;
    		for(int i=0;i<eve.size()-2;i+=2){

    			cout<<eve[i]<<" "<<eve[i+1]<<endl;
    		}
    	}
    		if(odd.size())
    		for(int i=0;i<odd.size()-flag;i+=2){
    			cout<<odd[i]<<" "<<odd[i+1]<<endl;
    		}

    	}







    }

    return 0;
}