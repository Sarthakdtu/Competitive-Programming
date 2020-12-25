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

struct ans{
	bool pos;
	ll num,good;
};

ans dfs(vector<vector<int> > &g, ll h[], ll p[], int n, ll m, int src){


	ll hap = 0, pel = p[src],gd=0;

	for(int i=0;i<g[src].size();i++){
		int v = g[src][i];
		ans a = dfs(g, h, p, n, m, v);

		if(a.pos){
			pel += a.num;
			gd+=a.good;
		}
		else{
			return a;
		}
	}

	ll maxh = pel;
	ll minh = -pel;

	if(h[src] >=minh && h[src] <=maxh){
		if(h[src]%2==0 && maxh%2==0){
				ll x=h[src]+pel-2*(gd);
 				if(x>=0&&x<=2*p[src]&&x%2==0)
				return {true, pel,(x/2)+gd};
		}
		else if(h[src]%2!=0 && maxh%2!=0){
			ll x=h[src]+pel-2*(gd);
 				if(x>=0&&x<=2*p[src]&&x%2==0)
				return {true, pel,(x/2)+gd};
		}
	}
	cout<<src<<" "<<gd;
	return {false, pel,gd};
}
 
int main()
{
    sarthak();
    int t;
    cin>>t;
    while(t--){
    	int n; ll m;
    	cin>>n>>m;
    	ll p[n+1];
    	ll h[n+1];
    	for(int i=1;i<n+1;i++)
    		cin>>p[i];
    	for(int i=1;i<n+1;i++)
    		cin>>h[i];

    	vector<vector<int> > graph(n+1);

    	for(int i=1;i<n;i++){
    		int a, b;
    		cin>>a>>b;
    		graph[a].push_back(b);
    	}

    	ans a = dfs(graph, h, p, n, m, 1);
    	if(a.pos)
    		cout<<"YES";
    	else
    		cout<<"NO";
    	cout<<endl;

    }

    return 0;
}	