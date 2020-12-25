#include<bits/stdc++.h>
using namespace std;

struct mov{
    int x;
    int y;
};

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

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<pair<int, int> > p(n);
        for(int i=0;i<n;i++){
            cin>>p[i].first;
            p[i].second = i;
        }
        
        sort(p.begin(), p.end());
        vector<pair<int, int> > moves(m);
        for(int i=0;i<m;i++)
            cin>>moves[i].first>>moves[i].second;
        

        int ans = 0;
        vector<pair<int, int> > steps;
        for(int i=0;i<n;i++){
            if(i==p[i].second)
                continue;
            
            int src = i;
            int dest = p[i].second;
            //cout<<"Have to swap "<<src+1<<" "<<dest+1<<endl;
            steps.push_back({min(src+1, dest+1), max(src+1, dest+1)});
            swap(p[src].first, p[dest].first);
            swap(p[src].second, p[dest].second);

            if(i!=p[i].second)
                --i;
        }

        for(int i=0;i<steps.size();i++)
            cout<<steps[i].first<<" "<<steps[i].second;
        vector<pair<int, int> > new_steps;
        p.clear();
        for(int i=0;i<steps.size()-1;i++){

            pair<int, int> fstep = steps[i];
            pair<int, int> sstep = steps[i+1];
            int a, b, c, d;
            a = fstep.first;
            b = fstep.second;
            c = sstep.first;
            d = sstep.second;
            int common=-1;
            if(a==d || a==c)
                common = a;
            else if(b==d || b==c)
                common = b;
            
            if(common!=-1){
                
            }
            else{
                

            }
            new_steps.push_back({});

        }


        cout<<ans<<endl;        
    }
    return 0;
}