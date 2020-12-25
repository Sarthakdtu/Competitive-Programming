#include<bits/stdc++.h>
using namespace std;
#define mpi map<int, int>

bool graph[20][20];

struct data{
    vector<int> arr;
    int steps;
    vector<vector<int> > mycycles;
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

bool is_cyclically_sorted(vector<int> &arr, vector<int> &cycle){
    
    for(int i=0;i<cycle.size();i++){
        int idx = cycle[i]-1;
        if(arr[idx]!=idx+1)
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
        vector<pair<int, int> > p2(n);
        vector<int> ogv;
        for(int i=0;i<n;i++){
            cin>>p[i].first;
            p[i].second = i;
            ogv.push_back(p[i].first);
            
        }
        
        
        //sort(p.begin(), p.end());
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
        
        memset(vis, false, sizeof(vis));    
        vector<vector<int> > cycles;
        for(int i=0;i<n;i++){
            // cout<<"i cant even"<<endl;
            // cout<<p[i].first<<" "<<p[i].second<<endl;
            if(p[i].first==i+1 || vis[i])
                continue;
            //cout<<"new cycle"<<endl;
            vector<int> cycle;
            int j = i;
            while(!vis[j]){
                //cout<<j+1<<" ";
                vis[j] = true;
                cycle.push_back(j+1);
                j = p[j].first-1;
                j = p[j].second;
            }
           // ans += cycle.size()-1;
            cycles.push_back(cycle);
            ans += cycle.size()-1;
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
        q.push({ogv, 0, cycles });
        p.clear();
        moves.clear();
        vector<int> sorted;
        for(int i=0;i<n;i++)
            sorted.push_back(i+1);
        vector<vector<int> > myc;
        visited_state[sorted] = 2;
        while(!q.empty()){
            data curr = q.front();
            q.pop();
            if(curr.steps<=ans){
                ogv = curr.arr;
                flag = true;
                myc = curr.mycycles;
                for(int s=0;s<myc.size();s++){
                    if(!is_cyclically_sorted(curr.arr, myc[s])){
                        continue;
                    }
                    else{
                        myc.erase(myc.begin() + s);
                        s--;
                    }
                }
                for(int s=0;s<myc.size();s++){
                        flag = false;
                        for(int r=0;r<myc[s].size();r++){
                            for(int u=r+1;u<myc[s].size();u++){
                                int i = myc[s][r];
                                int j = myc[s][u];
                                if(ogv[i-1]==i ||ogv[j-1]==j)
                                    continue;
                                swap(ogv[i-1], ogv[j-1]);
                                int vs = visited_state[ogv];
                                int co = cost(i, j, comp);
                                if(vs==0){
                                    q.push({ogv, curr.steps + co, myc});
                                    visited_state[ogv] = 1;
                                }
                                else if(vs==2)
                                    ans = min(ans, curr.steps + co);
                                
                                swap(ogv[i-1], ogv[j-1]);
                            }
                        }
                    }
                    if(flag){
                        ans = min(ans, curr.steps);
                    }
                }
                
            }
        

        cout<<ans<<endl;        
    }
    return 0;
}
