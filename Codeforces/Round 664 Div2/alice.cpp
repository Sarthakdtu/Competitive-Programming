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
    	string s;
    	cin>>s;
    	
    	int alice = 0;
    	bool flag = true;
    	while(true){
    		int m = 0;
    		int n = s.size();
    		string ns = "";
    		int idx = -1;
    		for(int i=0;i<n;i++){
    			int j = i;
    			int len = 0;
    			while(j<n && s[j]=='1'){
    				len++;
    				j++;
    			}
    			if(m<len){
    				m = max(m, len);
    				idx = i;
    				i = j-1;
    			}

    		}
    		if(idx==-1){
    			break;
    		}
    		//cout<<idx<<endl;
    		if(flag){
    			alice += m;
    		}
    		for(int i=0;i<idx;i++){
    				ns += s[i];
    			}
    			for(int i=idx+m;i<n;i++)
    				ns += s[i];
    		//cout<<ns<<endl;
    		flag = !flag;
    		s = ns;
    		if(s=="")
    			break;
    	}

    	cout<<alice<<endl;





    }

    return 0;
}