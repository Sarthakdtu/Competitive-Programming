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
    	vector<ll> arr(n);
    	for(int i=0;i<n;i++)
    		cin>>arr[i];

    	
  vector<ll> res;
  int low = 0, high = 0;
  for (auto i = 0; i < arr.size(); i++) {
    res.push_back(arr[i]);
    for (auto j = low; j < high; j++)
      if (res.back() != (res[j] | arr[i])) res.pu sh_back(c[j] | arr[i]);
  	low = high, high = res.size()
  }
  unordered_set<ll>ans =unordered_set<ll>(begin(res), end(res)).size();
  int ooi = ans.size();
  int tot = (n*(n+1))/2;
  ooi = tot - ooi;
  if(ooi==0){
  	cout<<"YES";
  }
  else{
  	cout<<"NO";
  }

  cout<<endl;







    }

    return 0;
}