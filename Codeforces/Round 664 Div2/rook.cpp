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
struct p{
	int a;
	int b;
};
int main()
{
    sarthak();
    int t;
    
	int n, m , x, y;
	vector<p> this_is_answer;
		cin>>n>>m;
		cin>>x>>y;
		this_is_answer.push_back({x, y});
		
		for (int i = y-1; i>=1; i--)
		{
			this_is_answer.push_back({x,i});
		}
		for (int i = y+1; i <=m ; i++)
		{
			this_is_answer.push_back({x,i});
		}
		int f=0;
		for (int i = x-1; i >=1 ;i--)
		{
			if(f==0){
				for (int j = m; j>=1 ; j--)
				{
					this_is_answer.push_back({i,j});
				}
			}
			else
			{
				for (int j = 1; j<=m ; j++)
				{
					this_is_answer.push_back({i,j});
				}	
			}
			if(f==0)
				f=1;
			else
				f=0;
		}
		for (int i = x+1; i <=n ; i++)
		{
			if(f==0){
				for (int j = m; j>=1 ; j--)
				{
					this_is_answer.push_back({i,j});
				}
			}
			else
			{
				for (int j = 1; j<=m ;j++)
				{
					this_is_answer.push_back({i,j});
				}	
			}
			if(f==0)
				f=1;
			else
				f=0;	
		}
		for (int i = 0; i < this_is_answer.size(); i++)
		{
			cout<<this_is_answer[i].a;
			cout<<" ";
			cout<<this_is_answer[i].b;
			cout<<endl;
		}






   return 0;
}