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
    	int n, m;
    	cin>>n>>m;
    	vector<vector<int> > arr;
    	bool flag = false;
    	for(int i=0;i<n;i++){
    		int a;
    		vector<int> b;
    		cin>>a;
    		b.push_back(a);
    		cin>>a;
    		b.push_back(a);
    		cin>>a;
    		b.push_back(a);
    		cin>>a;
    		b.push_back(a);
    		arr.push_back(b);
    		// cout<<b[1]<<b[2]<<endl;
    		if(b[1]==b[2])
    			flag = true;
    	}
    	if(m&1)
    		flag = false;

    	if(flag)
    		cout<<"YES";
    	else
    		cout<<"NO";
    	cout<<endl;







    }

    return 0;
}