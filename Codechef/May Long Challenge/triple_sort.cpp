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
                //cycle[cs].push_back(i);
            // cout<<"cycle "<<cs+1<<endl;
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
            //cout<<" cycle formed "<<cycle.size()<<endl;
            p.clear();
            int ans= 0;
            vector<pair<int, int> > cycle2;
            for(int i=0;i<cycle.size();i++){
               // cout<<"Currently on "<<i<<endl;
                if(cycle[i].size()==1){
                    //cout<<"Removing "<<i<<" coz size 1"<<endl;
                    cycle.erase(cycle.begin() + i);
                    i--;
                   // cout<<cycle.size()<<i<<" "<<endl;
                    if(cycle.size()==0){
                        break;
                    }
                    continue;
                }
                else if(cycle[i].size()==2){
                    //sort(cycle[i].begin(), cycle[i].end());
                    int i1 = cycle[i][0];
                    int i2 = cycle[i][1];
                    cycle2.push_back({min(i1, i2), max(i1, i2)});
                    continue;
                }
                vector<int> c = cycle[i];
                for(int j=1;j<c.size();j+=2){
                    int v1, v2, v3;
                    if(j!=c.size()-1){
                        v1 = c[0], v2 = c[j], v3 = c[j+1];
                        steps.push_back({v1, v2, v3});
                        //j++;
                    }
                    // c.erase(c.begin() + j + 1);
                    // c.erase(c.begin() + j + 1);
                    //j++;
                    // if(c.size()==1){
                    //     cycle.erase(cycle.begin() + i);
                    //     //cout<<"Removing "<<i<<" coz size 1 inside "<<cycle.size()<<endl;
                    //     i--;
                        
                    //     break;
                    // }
                    if(j==c.size()-1){
                        //sort(c.begin(), c.end());
                        int b = c[j];
                        cycle2.push_back({min(v1, b), max(v1, b)});
                        break;
                    }
                    //j--;
                }
            }

             //cout<<"time for 2"<<endl;
             //cout<<cycle.size()<<endl;
            //cycle size = 2
            //sort(cycle.begin(), cycle.end());
            if(cycle.size()%2==0){
                //cout<<"nig"<<cycle.size()<<endl;
                if(cycle.size()>0)
                for(int i=0;i<cycle.size()-1;i++){
                    // cout<<"cycle "<<cycle[i][0]<<" "<<cycle[i][0]<<endl;
                    // cout<<"cycle "<<cycle[i+1][0]<<" "<<cycle[i+1][0]<<endl;
                    steps.push_back({cycle[i][0], cycle[i+1][0], cycle[i+1][1]});
                    //cout<<cycle[i][0]<<" "<<cycle[i+1][0]<<" "<<cycle[i+1][1]<<endl;
                    steps.push_back({cycle[i][0], cycle[i+1][0], cycle[i][1]});
                    //cout<<cycle[i][0]<<" "<<cycle[i+1][0]<<" "<<cycle[i][1]<<endl;
                    i++;
                }
                //cout<<"dont";
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
                    int rem = v1 + v2 + v3;
                    int maxv = max(v1, max(v2, v3));
                    int minv = min(min(v1, v2), v3);
                    rem = rem - maxv - minv;
                    cout<<minv<<" "<<rem<<" "<<maxv<<endl;
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
