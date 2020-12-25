#include<bits/stdc++.h>
using namespace std;
struct triplet{
    int a;
    int b;
    int c;

};


void swap(int arr[], int i , int j){
    i--;
    j--;
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;

}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
            vector<pair<int, int> > p(n);//, p2[n];
            //int sp[n];
            for(int i=0;i<n;i++){
                cin>>p[i].first;
                p[i].second = i+1;
            }
            //sort(p.begin(), p.end());
            vector<triplet> steps;
            bool vis[n+1];
            vector<vector<int> > cycle(n);
            int cs = 0;
            memset(vis, false, sizeof(vis));
            for(int i=1;i<n+1;i++){
                if(vis[i])
                    continue;
                int j = p[i-1].second;
    
                while(!vis[j]){
                   // cout<<j<<" ";
                    cycle[cs].push_back(j);
                    vis[j] = true;
                    j = p[j-1].first;
                }
                cs++;
                //cout<<endl;
            }
            cycle.resize(cs);
            p.clear();
            int ans= 0;
            vector<pair<int, int> > cycle2;
            for(int i=0;i<cycle.size();i++){
                if(cycle[i].size()==1){
                    continue;
                }
                else if(cycle[i].size()==2){
                    int i1 = cycle[i][0];
                    int i2 = cycle[i][1];
                    cycle2.push_back({i1, i2});
                    continue;
                }
    
                for(int j=1;j<cycle[i].size();j+=2){
                    int v1, v2, v3;
                    if(j!=cycle[i].size()-1){
                        v1 = cycle[i][0], v2 = cycle[i][j], v3 = cycle[i][j+1];
                        steps.push_back({v1, v2, v3});
                    }
                    else{
                        int b = cycle[i][j];
                        cycle2.push_back({cycle[i][0],  b});
                        break;
                    }

                }
            }

            if(cycle2.size()%2==0){
               
                if(cycle2.size()>0)
                for(int i=0;i<cycle2.size();i+=2){
                    int v1, v2, v3, v4;
                    v1 = cycle2[i].first, v2 = cycle2[i].second;
                    v3 =cycle2[i+1].first, v4 =cycle2[i+1].second;
                    
                    steps.push_back({cycle2[i].first, cycle2[i+1].first, cycle2[i+1].second});
                    steps.push_back({cycle2[i].first, cycle2[i+1].first, cycle2[i].second});
                }
            }
            else{
                ans = -1;
            }
            //cout<<"what's poppin?";
            if(ans==-1){
                cout<<ans<<endl;
                continue;
            }
            else if(steps.size()<=k){      
                cout<<steps.size()<<endl;
                for(int i=0;i<steps.size();i++){
                    int v1, v2, v3;
                    v1 = steps[i].a, v2 = steps[i].b, v3 = steps[i].c;
                    // int rem = v1 + v2 + v3;
                    // int maxv = max(v1, max(v2, v3));
                    // int minv = min(min(v1, v2), v3);
                    // rem = rem - maxv - minv;
                    //cout<<minv<<" "<<rem<<" "<<maxv<<endl;
                    cout<<v1<<" "<<v2<<" "<<v3<<endl;
                }
            }
            else{
                cout<<"-1"<<endl;
            }
        
    }

    return 0;
}
//25 625
//25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1                                                         ^  
