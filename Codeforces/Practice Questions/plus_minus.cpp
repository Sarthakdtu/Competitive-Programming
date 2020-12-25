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
    	int power =0;
    	//queue<int> plus;
    	ll res = 0;
    	
    	for(int i=0;i<s.size();i++){
    		power = 0;
    		if(s[i]=='-'){
    			res += i+1;
    			power--;
    		}
    		else{
    			int count = 0;
    			while(i<s.size() && count>-1){
    				count--;
    				if(s[i]=='+')
    					count +=2;
    				i++;
    			}
    			power = count;
    			if(i==s.size()){
    				res += s.size();
    			}
    			else{
    				res += i;
    				i--;
    			}
    		}
    		//cout<<power<<endl;
    	}

    	if(power == -1)
    		res += s.size();
    	
    	cout<<res<<endl;
    }

    return 0;
}