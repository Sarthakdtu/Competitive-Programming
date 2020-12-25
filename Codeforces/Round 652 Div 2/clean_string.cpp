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
    	cin>>s;
    	string ans = "";

    	stack<char> stk;
    	stk.push(s[n-1]);

    	bool flag = true;

    	for(int i=s.size()-2;i>-1;i--){
    		if(stk.top()=='0' && s[i]=='1'){
    			flag = false;
    			while(!stk.empty() && stk.top()=='0'){
    				stk.pop();
    				flag = true;
    			}
    			
    			stk.push('0');
    		}
    		else
    			stk.push(s[i]);
    	}
    	
    	flag = true;

    	while(!stk.empty()){
    		ans += stk.top();
    		stk.pop();
    	}
    	cout<<ans<<endl;
    	
    }

    return 0;
}