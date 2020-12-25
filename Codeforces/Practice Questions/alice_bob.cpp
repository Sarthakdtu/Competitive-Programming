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
    	stack<char> stk;
    	bool chance = true;
    	for(int i =0;i<s.size();i++){

    		if(stk.empty()){
    			stk.push(s[i]);
    		}
    		else if(stk.top()=='1' && s[i]=='0'){
    			chance = !chance;
    			stk.pop();
    		}
    		else if(stk.top()=='0' && s[i]=='1'){
    			chance = !chance;
    			stk.pop();
    		}
    		else{
    			stk.push(s[i]);
    		}
    	}
    	

    	if(!chance){
    		cout<<"DA";
    	}
    	else{
    		cout<<"NET";
    	}


    	cout<<endl;






    }

    return 0;
}