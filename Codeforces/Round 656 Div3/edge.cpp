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
 

bool dfs(int v, vector<map<int> > g, bool vis[], stack<pair<int, int> > ed){


	vis[v] = true;
	for(auto i=g[v].begin();i!=g[v].end();i++){
		int n = i->first;
		if(!vis[ n ] ){
			if(g[v][n]==1 && g[n][v]==1){
				
				bool opa = dfs(n, g, vis, ed);

			}
			else{
				dfs(n, g, vis, ed);
			}
		}
		else{

		}
	}
}

int main()
{
    sarthak();
    int t;
    cin>>t;
    while(t--){
    	int n, m;
    	cin>>n>>m;
    	vector<map<int> > graph(n+1);
    	for(int i=0;i<m;i++){
    		int a;
    		cin>>a;
    		int s, d;
    		cin>>s>>d;
    		graph[s][d] = 1;
    		if(a==0)
    			graph[d][s] = 1;
    	}
    	bool vis[n+1] = false;
    	for(int i=1;i<=n;i++){
    		if(!vis[i])
    			dfs(i, graph, vis);
    	}









    }

    return 0;
}