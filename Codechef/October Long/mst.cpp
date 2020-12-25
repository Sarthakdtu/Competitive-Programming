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

ll cost(vector<ll> a, vector<ll> b){
	ll d = 0;
	for(int i=0;i<a.size();i++){
		d += abs(a[i] - b[i]);
	}
	// cout<<d<<endl;
	return d;
}


struct Edge 
{ 
    ll src, dest, weight; 
}; 
  
Edge edge[5000*5000+70];
  
struct subset 
{ 
    ll parent; 
    ll rank; 
}; 
  
ll find(subset subsets[], ll i); 
void Union(subset subsets[], ll x, ll y); 
  
ll solve(int n, int e) 
{ 
    
    int V = n, E = e; 
   
    subset *subsets = new subset[V]; 
  
    ll *cheapest = new ll[V]; 
  
    // Create V subsets with single elements 
    for (int v = 0; v < V; ++v) 
    { 
        subsets[v].parent = v; 
        subsets[v].rank = 0; 
        cheapest[v] = -1; 
    } 
  
    // Initially there are V different trees. 
    // Finally there will be one tree that will be MST 
    int numTrees = V; 
    ll MSTweight = 0; 
  
    // Keep combining components (or sets) until all 
    // compnentes are not combined into single MST. 
    while (numTrees > 1) 
    { 
         // Everytime initialize cheapest array 
          for (int v = 0; v < V; ++v) 
           { 
               cheapest[v] = -1; 
           } 
  
        // Traverse through all edges and update 
        // cheapest of every component 
        for (int i=0; i<E; i++) 
        { 
            // Find components (or sets) of two corners 
            // of current edge 
            ll set1 = find(subsets, edge[i].src); 
            ll set2 = find(subsets, edge[i].dest); 
  
            // If two corners of current edge belong to 
            // same set, ignore current edge 
            if (set1 == set2) 
                continue; 
  
            // Else check if current edge is closer to previous 
            // cheapest edges of set1 and set2 
            else
            { 
               if (cheapest[set1] == -1 || 
                   edge[cheapest[set1]].weight > edge[i].weight) 
                 cheapest[set1] = i; 
  
               if (cheapest[set2] == -1 || 
                   edge[cheapest[set2]].weight > edge[i].weight) 
                 cheapest[set2] = i; 
            } 
        } 
  
        // Consider the above picked cheapest edges and add them 
        // to MST 
        for (int i=0; i<V; i++) 
        { 
            // Check if cheapest for current set exists 
            if (cheapest[i] != -1) 
            { 
                ll set1 = find(subsets, edge[cheapest[i]].src); 
                ll set2 = find(subsets, edge[cheapest[i]].dest); 
  
                if (set1 == set2) 
                    continue; 
                MSTweight += edge[cheapest[i]].weight; 
                Union(subsets, set1, set2); 
                numTrees--; 
            } 
        } 
    } 
  
   return  MSTweight; 
    // return; 
} 

  
ll find(subset subsets[], ll i) 
{ 
   
    if (subsets[i].parent != i) 
      subsets[i].parent = 
             find(subsets, subsets[i].parent); 
  
    return subsets[i].parent; 
} 
  
void Union(subset subsets[], ll x, ll y) 
{ 
    ll xroot = find(subsets, x); 
    ll yroot = find(subsets, y); 
  
   
    if (subsets[xroot].rank < subsets[yroot].rank) 
        subsets[xroot].parent = yroot; 
    else if (subsets[xroot].rank > subsets[yroot].rank) 
        subsets[yroot].parent = xroot; 
  
    // If ranks are same, then make one as root and 
    // increment its rank by one 
    else
    { 
        subsets[yroot].parent = xroot; 
        subsets[xroot].rank++; 
    } 
} 

int main()
{
    sarthak();
 
	int n, d;
	cin>>n>>d;
	vector<vector<ll> > arr;
	for(int i=0;i<n;i++){
		vector<ll> v;
		for(int j=0;j<d;j++){
			int a;
			cin>>a;
			// cout<<a<<endl;
			v.push_back(a);
		}
		arr.push_back(v);

	}
	
	int e = 0;
	for(ll i=0;i<n;i++){
		for(ll j=i+1;j<n;j++){
			if(i==j)
				continue;
			ll cst = -cost(arr[i], arr[j]);
			// cout<<cst<<endl;
			// vector<int> a(3);
			// a[0] = i, a[1] = j, a[2] = -cst; 
			edge[e].src = i;
			edge[e].dest = j;
			edge[e].weight =  cst;
			e++;
		}

	}
	// sort(edges.begin(), edges.end(), comp);
	cout<<-solve(n, e)<<endl;

    return 0;
}