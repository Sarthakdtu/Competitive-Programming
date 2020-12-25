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

struct d{
	int t;
	int a;
	int b;
};

bool comp(d i, d j){
	if(i.t<j.t)
		return true;
	return false;

}
 
int main()
{
    sarthak();
    int n, k;
    d arr[n];
    for(int i=0;i<n;i++){
    	cin>>arr[i].t<<arr[i].a<<arr[i].b;
    }
    int time = 0;
    sort(arr, arr+n, comp);
    int al=0, bo = 0;
    for(int i=0;i<n;i++){
    	if(arr[i].a || arr[i].b){
    		time += arr[i].t;
    		al += arr[i].a;
    		bo += arr[i].b;
    		arr[i].t =0;
    	}

    	if(al>=k && bo>=k){
    		break;
    	}
    }
    if(al<k || bo<k){
		for(int i=0;i<n;i++){
			if(arr[i].t!=0 && (arr[i].a || arr[i].b)){
				time += arr[i].t;
				al += arr[i].a;
				bo += arr[i].b;
				arr[i].t =0;
			}

			if(al>=k && bo>=k){
				break;
			}
		}

    		
    }
    else{

    }


    return 0;
}