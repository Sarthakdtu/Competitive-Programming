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
 
struct moves{
	string res;
	int steps;
	vector<int> res_vec;
};

string rev_str(string &op, string &left){

	string ans = "";
	for(int i=0;i<op.size();i++){
		if(op[i]=='0')
			ans += "1";
		else
			ans += "0";
	}
	reverse(ans.begin(), ans.end());

	ans  = ans  + left;

	return ans;

}


int main()
{
    sarthak();
    int t;
    cin>>t;
    while(t--){
    	int n;
    	cin>>n;
    	string a;
    	cin>>a;
    	string b;
    	cin>>b;

    	queue<moves> q;
    	vector<int> v;
    	map<string, int> vis;
    	q.push({a, 0, v});
    	vector<int>  pos_ans;
    	
    	bool flag = false;
    	vector<int> mo;
    	while(!q.empty()){

    		moves curr = q.front();
    		q.pop();
    		vis[curr.res] = 1;
    		mo = curr.res_vec;
    		for(int i=0;i<n;i++){
    			string op = curr.res.substr(0, i+1);
    			string left = curr.res.substr(i+1, n);
    			string ans = rev_str(op, left);
    			mo.push_back(i+1);
    			if(vis[ans]==0){
    				q.push({ans, curr.steps + 1, mo});
    			}
    			vis[ans] = 1;
    			if(ans==b){
    				//flag = true;
    				pos_ans = mo;
    				break;
    			}
    			mo.pop_back();
    		}
    		curr.res.clear();
    		mo.clear();
    	}

    	
    	cout<<pos_ans.size()<<" ";
    	for(int i=0;i<pos_ans.size();i++){
    		cout<<pos_ans[i]<<" ";
    	}
    	cout<<endl;

    }

    return 0;
}
