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
    string n;
    cin>>n;
    int idx=-1;
    int curr = -1;
    int odd = n[n.size()-1] - '0';
    for(int i=n.size()-2;i>-1;i--){
    	int num = n[i] - '0';

    	if(num%2==0){
    		//cout<<num;
    		if(curr==-1){
    			idx = i;
    			curr = num;
    			continue;
    		}
    		if(num<odd){
    			idx = i;
    			curr = num;
    		}
    		
    	}
    }
    if(idx==-1){
    	cout<<"-1";
    }
    else{
    	swap(n[idx], n[n.size()-1]);
    	cout<<n;
    }
    cout<<endl;
    return 0;
}
