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
    	int arr[n];
    	int ms = 0;
    	for(int i=0;i<n;i++){
    		cin>>arr[i];
    		ms = max(arr[i], ms);
    	}
    	string res = "";
    	char ch = 'a';
    	for(int i=0;i<=ms;i++){
    		res += ch;
    		if(ch=='z'){
    			ch = 'a';
    		}
    		else{
    			ch++;
    		}
    	}

    	vector<string> ans;
    	ans.push_back(res);
    	for(int i=0;i<n;i++){
    		int num = arr[i];
    		string p = res.substr(0, num);
    		if(num<=ms){
    			string r = res.substr(num+1, ms);
    			ch = res[num];
    			if(ch=='z'){
    			ch = 'a';
    			}
    			else{
    				ch++;
    			}
    			string str = p + ch + r;
    			res = str;
    		}
    		ans.push_back(res);
    	}

    	for(int i=0;i<ans.size();i++){
    		cout<<ans[i]<<endl;
    	}
    	





    }

    return 0;
}