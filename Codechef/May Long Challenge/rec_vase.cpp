#include<bits/stdc++.h>
using namespace std;
#define mpi map<int, int>

bool graph[100][100];

void scc(int src, int v, bool vis[], mpi &comp, int comp_num){
    vis[src] = true;
    comp[src] = comp_num;
    for(int i=1;i<=v;i++){
        if(graph[i][src] || graph[src][i]){
            if(!vis[i]){
                scc(i, v, vis, comp, comp_num);
            }
        }
    }
}

int cost(int i, int j, mpi &comp){
    if(comp[i] == comp[j])
        return 0;
    return 1;
}

int find_cost(vector<pair<int, int> > &steps,  mpi &m, int idx){
    if(idx>=steps.size())
        return INT_MAX/2;
    // cout<<"Exploring step "<<idx<<" : "<<steps[idx].first<<", "<<steps[idx+1].second<<endl;
    if(idx==steps.size()-1)
        return cost(steps[idx].first, steps[idx].second, m);
     
    pair<int,int> s1 = steps[idx];
    pair<int,int> s2 = steps[idx+1];
    //cout<<"Exploring step "<<idx<<" ";

    int i = s1.first;
    int j = s1.second;
    int k = s2.first;
    int l = s2.second;
    //int common;
    //cout<<i<<" "<<j<<endl;
    int ans;
    //int fans = INT_MAX;
    int a1 = find_cost(steps, m, idx+1);
    int sc = cost(i, j, m);
    a1 = a1 + sc;
    ans = a1;
    // cout<<"a1 "<<a1<<endl;

    if(i==l || i==k){        
        // cout<<"condition 1"<<endl;
        //common = (i==k)? k : l;
        //ans = step_cost(i, j, k + l - i, m);
        
        steps[idx+1].first = i;
        steps[idx+1].second = j;
        int a2 = find_cost(steps, m, idx+1) + cost(j, k + l - i, m);
        // cout<<"a2 = "<<a2<<endl;
        steps[idx+1].first = j;
        steps[idx+1].second = l + k - i;
        int a3 = find_cost(steps, m, idx+1) + cost(i, k + l - i, m);
        // cout<<"a3 = "<<a3<<endl;

        ans = min(a1, min(a2, a3));
        // cout<<"answer min "<<ans<<endl;
        //fans = ans;
    }
    else if(j==k || j==l){
        //common = (j==k)? k : l;
        //ans += step_cost(i, j, k + l - j, m);
        // cout<<"condition 2"<<endl;
        steps[idx+1].first = i;
        steps[idx+1].second = j ;
        int a2 = find_cost(steps, m, idx+1) + cost(i, k + l - j, m);
        // cout<<"a2 = "<<a2<<endl;
        steps[idx+1].first = i;
        steps[idx+1].second = l + k - j;
        int a3 = find_cost(steps, m, idx+1) + cost(j, k + l - j, m);
        // cout<<"a3 = "<<a3<<endl;

        ans = min(a1, min(a2, a3));
        // cout<<"answer min "<<ans<<endl;
        //fans = ans;
    }
    //if(!flag)
   
    //fans = 
    //cout<<"Finally choosing "<<ans<<endl;

    return ans;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        memset(graph, false, sizeof(graph));
        int n, m;
        cin>>n>>m;
        //memset(graph, false, sizeof(graph));
        vector<pair<int, int> > p(n);
        for(int i=0;i<n;i++){
            cin>>p[i].first;
            p[i].second = i;
        }
        
        sort(p.begin(), p.end());
        vector<pair<int, int> > moves(m);
        int a, b;
        mpi comp;
        for(int i=0;i<m;i++){
            cin>>a>>b;
            moves[i].first = a, moves[i].second=b;
            graph[a][b] = true;
            graph[b][a] = true;
        }
        if(n==1){
            cout<<0<<endl;
            continue;
        }
        bool vis[n+1];
        //map<int, int> comp;
        int comp_num = 1;
        memset(vis, false, sizeof(vis));
        for(int i=1;i<=n;i++){
            if(!vis[i]){
                scc(i, n, vis, comp, comp_num);
                comp_num++;
            }
        }

        
        int ans = 0;
        vector<pair<int, int> > steps;
        for(int i=0;i<n;i++){
            if(i==p[i].second)
                continue;
            int src = i;
            int dest = p[i].second;
            //cout<<"Have to swap "<<src+1<<" "<<dest+1<<endl;
            steps.push_back({src+1, dest+1});
            swap(p[src].first, p[dest].first);
            swap(p[src].second, p[dest].second);

            if(i!=p[i].second)
                --i;
        }
        if(steps.size()!=0)
            steps.reserve(steps.size());
        ans = steps.size();
        if(m>0)
            ans = find_cost(steps, comp, 0);

        cout<<ans<<endl;        
    }
    return 0;
}

/*
memset(vis, false, sizeof(vis));    
        vector<vector<int> > cycles;
        for(int i=0;i<n;i++){
            if(i==p[i].second || vis[i])
                continue;
            vector<int> cycle;
            int j = p[i].second;
            while(!vis[j]){
                vis[j] = true;
                cycle.push_back(j);
                j = p[j].second;
            }
            cycles.push_back(cycle);
        }
*/