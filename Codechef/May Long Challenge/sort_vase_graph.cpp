#include<bits/stdc++.h>
using namespace std;

struct mov{
    int x;
    int y;
};

bool graph[100][100];

bool comp(mov a, mov b){
    if(a.x<b.x)
        return true;
    return false;
}

bool in_moves(int x, int y, vector<pair<int, int> > moves){

    for(int i=0;i<moves.size();i++){
        if((moves[i].first==x && moves[i].second==y) || (moves[i].first==y && moves[i].second==x))
            return true;
    }
    return false;
}

void scc(int src, int v, bool vis[], map<int, int> &comp, int comp_num){

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

void update_graph(int v, int i, int j){
    for(int k=1;k<=v;k++){
        if(graph[i][k] || graph[j][k]){
            graph[i][k] = true;
            graph[j][k] = true;
            graph[k][i] = true;
            graph[k][j] = true;
        }
    } 
}

int cost(int i, int j, map<pair<int, int>, int> m){

}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        memset(graph, false, sizeof(graph));
        vector<pair<int, int> > p(n);
        for(int i=0;i<n;i++){
            cin>>p[i].first;
            p[i].second = i;
        }
        
        sort(p.begin(), p.end());
        vector<pair<int, int> > moves(m);
        int a, b;
        map<pair<int, int> , int > moves_map;
        for(int i=0;i<m;i++){
            cin>>a>>b;
            moves[i].first = a, moves[i].second=b;
            // moves_map[{a, b}] = 1;
            // moves_map[{b, a}] = 1;
            graph[moves[i].first][moves[i].second] = true;
            graph[moves[i].second][moves[i].first] = true;
        }

        bool vis[n+1];
        map<int, int> comp;
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
        //p.clear();
        //moves.clear();
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

        if(m==0){
            cout<<steps.size()<<endl;
            continue;
        }
        // int alias[n+1];
        // for(int i=1;i<n+1;i++)
        //     alias[i] = i;

        for(int i=0;i<steps.size();i++){ 
            int src = steps[i].first;
            int dest = steps[i].second;
            cout<<"Move: "<<src<<" "<<dest<<endl;
            if(comp[src] == comp[dest]){
                continue;
            }
            else{
                ans++;
            }
                
            // int temp = alias[src];
            // alias[src] = alias[dest];
            // alias[dest] = temp;
           //cout<<"it is what it is"<<endl;
           // update_graph(n, src, dest);
        }

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