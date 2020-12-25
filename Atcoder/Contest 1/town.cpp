#include<bits/stdc++.h>

using namespace std;
typedef long ll;


int findMod(string s, int m)
{
	if(s.size()==0)
	{
		return 0;
	}
	
	string sub = s.substr(0, s.size()-1);
	int last = (int)s[s.size()-1] -'0';
	int ans = (((findMod(sub, m)) * (10%m))%m + last%m)%m;
	//cout<<s<<" "<<sub<<" "<<last<<" "<<ans<<" "<<endl;
	return ans;
}

int gcdAdv(int a, int b)
{
	if(a<b)
	{
	 return gcdAdv(a, b%a);	
	}
	if(b==0)
	{
		return a;
	}
	return gcdAdv(b, a%b);
}

int gcd(string s, int b)
{
	int a = findMod(s, b);
	if(a==0)
	    return b;
	return gcdAdv(a, b);
}


int main(){
   string k;
   int n;
   cin>>n>>k;
   int arr[n+1];
   for(int i=1;i<=n;i++)
    cin>>arr[i];
    vector<int> cycle;
    bool f[n+1], s[n+1];
    memset(f, false, sizeof(f));
    memset(s, false, sizeof(s));
    for(int i=1;i<=n;i++){
        int curr = arr[i];
        

    }

   





    return 0;
}