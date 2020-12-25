#include<bits/stdc++.h>
using namespace std;
struct triplet{
    int a;
    int b;
    int c;

};

void swap_(int arr[], int i , int j){
    i--;
    j--;
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;

}

void display(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
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
            cout<<"cycle "<<cs+1<<endl;
            while(!vis[j]){
                cout<<j<<" ";
                cycle[cs].push_back(j);
                vis[j] = true;
                j = p[j-1].first;
            }
            cs++;
        }
        cout<<" cycle formed"<<endl;

        int ans= 0;
        for(int i=0;i<cs;i++){
            if(cycle[i].size()==1){
                continue;
            }
            else if(cycle[i].size()==2){
                ans = -1;
                break;
            }
            vector<int> c = cycle[i];
            cout<<c.size()<<endl;
            for(int j=0;j<c.size()-2;j++){
                int v1, v2, v3;
                v1 = c[j], v2 = c[j+1], v3 = c[j+2];
                cout<<"adding "<<v1<<" "<<v2<<" "<<v3<<endl;
                steps.push_back({v1, v2, v3});
                cout<<*(c.begin() + j + 1)<<endl;
                cout<<*(c.begin() + j + 2)<<endl;
                c.erase(c.begin() + j + 1);
                c.erase(c.begin() + j + 1);
                if(c.size()==1){
                    break;
                }
                j--;
            }
        }

        if(ans==-1){
            cout<<ans<<endl;
            continue;
        }
        else if(steps.size()<=k){      
            cout<<steps.size()<<endl;
            for(int i=0;i<steps.size();i++){
                int v1, v2, v3;
                v1 = steps[i].a, v2 = steps[i].b, v3 = steps[i].c;
                int rem = v1+v2+v3;
                int maxv = max(v1, max(v2, v3));
                int minv = min(min(v1, v2), v3);
                rem = rem - maxv - minv;
                cout<<minv<<" "<<rem<<" "<<maxv<<endl;
            }
        }
        
    }

    return 0;
}
//25 625
//25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 
//10
//10 100
//2 8 7 4 5 6 9 3 10 1