#include<bits/stdc++.h>
using namespace std;
#define vvi vector<vector<int> >
#define vsi vector<set<int> >

void create_tree(vvi adj, vector<int> li, int root, vsi &tree){

    tree[root].insert(li.begin(), li.end());
    if(!adj[root].empty()){
        //list<int> children = adj[root];
        //children.push_back(root);
        for(int i =0; i<adj[root].size();i++){
            int c = adj[root][i];
            create_tree(adj, adj[root], c, tree);
            if(root!=1){
                tree[root].insert(tree[c].begin(), tree[c].end());
                tree[c].clear();
            }
        }
    }
    return ;
}

bool solve(vsi tree, vvi adj, set<int> arr, int root){
        
    for(int i=0;i<adj[root].size();i++){
        int c = adj[root][i];
        bool in  = includes(tree[c].begin(), tree[c].end(), arr.begin(), arr.end());
        if(in){
            return true;
        }
    }
    return false;
}

int main(){
    int n, m;
    cin>>n>>m;
    vvi adj(n+1);
    for(int i=1;i<n;i++){
        int a, b;
        cin>>a>>b;
        adj[a].push_back(b);
        //adj[b].push_back(a);
    }
    vsi tree(n+1);
    vector<int> li;
    create_tree(adj, li, 1, tree);
    //tree[1].insert(1);
    for(int i=0;i<adj[1].size();i++){
        int c = adj[1][i];
        tree[c].insert(1);
    }
    //tree[1].clear();
    
    for(int s = 1;s<tree.size();s++){
        cout<<s<<" : ";
        for(set<int>::iterator r =tree[s].begin();r!=tree[s].end();r++){
            cout<<*r<<", ";
        }
        cout<<endl;
    }
    
    while(m--){
        int k;
        cin>>k;
        set<int> arr;
        for(int i=0;i<k;i++){
            int a;cin>>a;
            arr.insert(a);
        }

        bool ans = solve(tree, adj, arr, 1);
        if(ans)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}