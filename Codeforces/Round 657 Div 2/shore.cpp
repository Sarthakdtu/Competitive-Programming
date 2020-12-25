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
 
bool func(vector<vector<int> > s, int idx, int l, int j){
	if(idx == s.size())
		return true;

	if(s[idx][j]>l)
		return false;

	bool pos = false;

	for(int i=j+1;i<s[idx].size();i++){
		if(s[idx][i-1]>l){
			break;
		}
		pos = func(s, idx+1, l, i);
		if(pos)
			return true;
	}


	for(int i=0;i<j;i++){
		if(i!=0 && s[idx][i-1]>l){
			break;
		}
		else if(i==0 && s[idx][s[idx].size()-1]){
			break;
		}
		pos = func(s, idx+1, l, i);
		if(pos)
			return true;
	}

	
	return false;

}

int main()
{
    sarthak();
    int t;
    cin>>t;
    while(t--){
    	int n, k, l;
    	cin>>n>>k>>l;
    	int arr[n];
    	for(int i=0;i<n;i++){
    		cin>>arr[i];
    	}
    	vector<vector<int> > steps(n);

    	for(int i=0;i<n;i++){
    		vector<int> curr;
    		for(int j=0;j<=k;j++){
    			curr.push_back(arr[i] + j);
    		}
    		for(int j=k-1;j>0;j--){
    			curr.push_back(arr[i] + j);
    		}
    		steps[i] = curr;
    	}

    	bool ans = func(steps, 0, l, 0);
    	if(ans){
    		cout<<"Yes";
    	}
    	else{
    		cout<<"No";
    	}
    	cout<<endl;

    }

    return 0;
}