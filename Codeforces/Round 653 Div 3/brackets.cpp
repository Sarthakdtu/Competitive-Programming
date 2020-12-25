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
    	string str;
    	cin>>str;

    	stack<char> s;
    	s.push(str[0]);
    
    	for(int i=1;i<n;i++){
    		if(!s.empty() && s.top()=='(' && str[i]==')'){
    			s.pop();
    		}
    		else{
    			s.push(str[i]);
    		}
    	}

    	int a = 0;
    	if(!s.empty())
    		a = s.size()/2;
    	cout<<a<<endl;






    }

    return 0;
}