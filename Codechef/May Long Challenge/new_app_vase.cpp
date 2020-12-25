#include<bits/stdc++.h>
using namespace std;
#define mpi map<int, int>

bool graph[20][20];

struct data{
    vector<int> arr;
    int steps;
};

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

bool is_sorted(vector<int> &arr){
    for(int i=0;i<arr.size()-1;i++){
        if(arr[i]>arr[i+1])
            return false;
    }

    return true;
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
        vector<int> ogv;
        for(int i=0;i<n;i++){
            cin>>p[i].first;
            p[i].second = i;
            ogv.push_back(p[i].first);
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
        //minimum steps
        for(int i=0;i<n;i++){
            if(i==p[i].second)
                continue;
            int src = i;
            int dest = p[i].second;
            //cout<<"Have to swap "<<src+1<<" "<<dest+1<<endl;
            //steps.push_back({src+1, dest+1});
            if(m>0)
                ans += cost(src+1, dest+1, comp);
            else
                ans++;
            swap(p[src].first, p[dest].first);
            swap(p[src].second, p[dest].second);

            if(i!=p[i].second)
                --i;
        }

        
        memset(vis, false, sizeof(vis));    
        vector<vector<int> > cycles;
        for(int i=0;i<n;i++){
            if(vis[i])
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

        if(ans==0 || m==0){
            cout<<ans<<endl;
            continue;
        }
        //ans = steps.size();
        //actual question
        queue<data> q;
        bool flag = true;
        map<vector<int>, int> visited_state;
        visited_state[ogv] = 1;
        q.push({ogv, 0});
    
        while(!q.empty()){
            data curr = q.front();
            q.pop();
            if(is_sorted(curr.arr)){
                ans = min(ans, curr.steps);                
            }
            else{
                if(curr.steps<=ans){
                    ogv = curr.arr;
                    for(int i=1;i<=n;i++){
                        for(int j=i+1;j<=n;j++){
                            swap(ogv[i-1], ogv[j-1]);
                            if(visited_state[ogv]==0)
                                q.push({ogv, curr.steps + cost(i, j, comp)});
                            else if(is_sorted(ogv))
                                ans = min(ans, curr.steps + cost(i, j, comp));
                            visited_state[ogv] = 1;
                            swap(ogv[i-1], ogv[j-1]);
                        }
                    }
                }
            }
        }

        cout<<ans<<endl;        
    }
    return 0;
}
