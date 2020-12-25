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

int func(string s, char c){

	int n = s.size();
	if(n==1){
		if(s[0]==c)
			return 0;
		return 1;
	}

	int fh = 0, sh = 0;
	for(int i=0;i<n/2;i++){
		if(s[i]==c)
			fh++;
	}

	for(int i=n/2;i<n;i++){
		if(s[i]==c)
			sh++;
	}

	
		return min(	(n/2 - fh) + func(s.substr(n/2, n), c+1), 
					(n/2 - sh) + func(s.substr(0, n/2), c+1) 
				  );

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
    	cout<<func(s, 'a')<<endl;






    }

    return 0;
}