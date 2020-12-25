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

bool can_be_pal(int freq[]){
	
	bool odd = true;
	for(int i=0;i<26;i++){
		if(!odd && freq[i]&1)
			return false;
		if(freq[i]&1)
			odd = false;
	}
	return true;
}

int main()
{
    sarthak();
    string s;
    cin>>s;
    int freq[26];
	memset(freq, 0, sizeof(freq));
	bool flag = false;
	for(int i=0;i<s.size();i++){
		freq[s[i] - 'a']++;
	}
	bool chance = true;
	while(true){
		if(can_be_pal(freq)){
			chance = !chance;
			break;
		}
		
		flag = false;
		for(int i=0;i<26;i++){
			if(freq[i]>0 && freq[i]%2==0){
				flag = true;
				freq[i]--;
				chance = !chance;
				break;
			}
		}
		
		if(!flag)
		for(int i=0;i<26;i++){
			if(freq[i]>0){
				flag = true;
				freq[i]--;
				chance = !chance;
				break;
			}
		}

		if(!flag){
			break;
		}
		
	}

	if(!chance)
		cout<<"First";
	else
		cout<<"Second";

	cout<<endl;
	
    


    return 0;
}