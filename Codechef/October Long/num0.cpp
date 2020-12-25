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
 
bool comp(int i, int j){
	if(i>j)
		return true;
	return false;
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
    	vector<int> nums;
    	bool flag = true;
    	int sum = 0;
    	for(int i=0;i<n;i++){
    		cin>>arr[i];
    		sum += arr[i];
    		nums.push_back(arr[i]);
    		if(sum == 0){
    			flag = false;
    		}
    		// sum += arr[i];
    	}
    	
    	if(flag){
    		cout<<"YES"<<endl;
    	for(int i=0;i<n;i++){
    		cout<<arr[i]<<" ";

    	}
    	cout<<endl;
    		continue;
    	}

    	if(sum == 0){
    		cout<<"NO"<<endl;
    		continue;
    	}

    	sort(nums.begin(), nums.end(), comp);
    	sum = 0;
    	int j = 0;
    	for(int i=0;i<n;i++){
    		arr[i] = nums[j];
    		// cout<<nums[0]<<endl;
    		sum += arr[i];
    		// cout<<arr[i]<<endl;
    		if(sum == 0){
    			cout<<"?"<<endl;
    			while(sum == 0 and j<nums.size())
    			sum -= nums[j];
    			j++;
    			sum += nums[j];
    			arr[i] = nums[j];
    			// cout<<nums[j]<<endl;
    			// cout<<j<<endl;
    			// swap(arr[0], arr[n-1]);    			
    		}
    		
    		nums.erase(nums.begin() + j);
    		
    		j = 0;
    		// vis[arr[i]] = 1;
    	}
    	cout<<"YES"<<endl;
    	for(int i=0;i<n;i++){
    		cout<<arr[i]<<" ";

    	}
    	cout<<endl;





    }

    return 0;
}