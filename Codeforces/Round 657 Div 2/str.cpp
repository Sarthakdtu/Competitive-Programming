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
    	string p = "abacaba";
    	int flag = -1;
    	bool allqs = true;
    	int qs = -1;

    	for(int i=0;i<n;i++){

    		if(s[i]!='?')
    			allqs = false;

    		if(flag!=1 && s.substr(i, i+7) == p){
    			if(flag==0){
    				flag = 1;
    			}
    			else
    				flag++;
    		}

    		if(qs==-1 && s.substr(i, i+7)=="???????"){
    			qs = i;
    		}
    	}

    	if(allqs){
    		//all qsns
    		cout<<"Yes"<<endl;
    		cout<<p;
    		for(int i=7;i<n;i++){
    			cout<<"d";
    		}
    		cout<<endl;
    		continue;
    	}
    	if(flag==1){
    		//2 patterns
    		cout<<"No"<<endl;
    		continue;
    	}
    	if(flag == 0 ){
    		cout<<"Yes"<<endl;
    		for(int i=0;i<n;i++){
    			if(s[i]=='?')
    				cout<<"d";
    			else
    				cout<<s[i];    			
    		}
    		cout<<endl;
    		continue;

    	}

    	if(qs!=-1){
    		cout<<"Yes"<<endl;
    		
    		for(int i=0;i<qs;i++){
    			if(s[i]=='?')
    				cout<<"d";
    			else
    				cout<<s[i];
    		}
    		cout<<p;
    		for(int i=qs+7;i<n;i++){
    			if(s[i]=='?')
    				cout<<"d";
    			else
    				cout<<s[i];
    		}
    		cout<<endl;
    		continue;
    	}

    	flag = -1;
    	bool found = false;

    	for(int i=0;i<n;i++){
    		if(s.substr(i, n) == "aba"){
    			if(flag==i+4){
    				if(s[i-1]=='?'){
    					s[i] = 'c';
    					found = true;
    					break;
    				}
    			}
    			flag = i;
    		}
    	}

    }
    string s1 = "ab?caba";
    string s2 = "ab?c";
    // cout<<test.strstr(p)<<endl;
    if (s1.find(s2) != std::string::npos) {
    std::cout << "found!" << '\n';
}
    return 0;
}