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
    	string s;
    	int curr=1;
    	cin>>s;
    	vector<int> ans;
    	int m=1;
    	ans.push_back(curr);
    	map<int, char> wh;
    	wh[1] = s[0];
    	for(int i=1;i<n;i++){
    		if(s[i]==s[i-1]){
    			curr = curr+1;
    			if(curr>m){
    				;
    			}
    			else if(wh[curr]==s[i]){
    				curr = m+1;
    			}
    		}
    		else{
    			curr = 1;
    		}
    		wh[curr] = s[i];
    		ans.push_back(curr);
    		m = max(m, curr);

    	}
    	cout<<m<<endl;;
    	for(int i=0;i<ans.size();i++)
    		cout<<ans[i]<<" ";
    	cout<<endl;

    }

    return 0;
}