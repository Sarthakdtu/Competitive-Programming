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
static int b=9;
void func(int i){
	::b++;
	static int b = 2;
	b++;
	cout<<"Call num "<<i<<"b :"<<b<<endl;
}

int main()
{
    sarthak();
    static int a;
    a = 4;
    cout<<a;
    for(int i=0;i<9;i++)
    	func(i);
  	cout<<b;
  	b++;
  	cout<<b<<endl;
  	int x = 100; //		01100010
  	int ans = ( ( x & 0x0F ) << 4 | ( x & 0xF0 ) >> 4);
  	cout<<( x >>4 )<<endl;
  	cout<< ans;

    return 0;
}