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
    	for(int i=0;i<n;i++)
    		cin>>arr[i];
    	multiset<int> a;
    	int ans = 0;
    	for(int s=2;s<=100;s++){
    		for(int j=0;j<n;j++){
    			a.insert(arr[j]);
    			/*
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
    	string ans = "";
    	for(int i=0;i<n;i++)
    		ans += "9";
    	int d = 0;
    	int j = n;
    	d = n%4;
    	if(d>0)
    		d = 1;
    	n = (n/4) + d;


    	for(int i=j-1;i>j-1-n;i--)
    		ans[i] = '8';
    	cout<<ans<<endl;






    }

    return 0;
}
    			*/
    		}
    		int r = 0;
    		while(!a.empty()){
    			int num = *(a.begin());
    			a.erase(a.begin());
    			if(a.find(s-num) == a.end()){
    				continue;
    			}
    			else{
    				r++;
    				a.erase(a.find(s - num ));
    			}
    		}
    		ans = max(ans, r);
    	}

    	cout<<ans<<endl;






    }

    return 0;
}