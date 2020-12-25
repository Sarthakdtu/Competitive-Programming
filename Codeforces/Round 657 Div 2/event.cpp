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
    	int arr[26];
    	memset(arr, 0, sizeof(arr));
    	for(int i=0;i<n;i++){

    		arr[s[i] - 'a']++;

    	}
    	bool flag = true;
    	for(int i=0;i<26;i++){
    		if(arr[i]&1){
    			flag = false;
    			break;
    		}
    	}
    	if(flag){
    		cout<<"YES";
    	}
    	else{
    		cout<<"NO";
    	}
    	cout<<endl;





    }

    return 0;
}