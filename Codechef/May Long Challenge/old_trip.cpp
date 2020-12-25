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
        if(k==n*n){
            int p[n];//, p2[n];
            for(int i=0;i<n;i++){
                cin>>p[i];
            // p2[i] = p[i];
            }
            vector<triplet> steps;
            int size = n;
            
            int num_steps = 0;
            int v1, v2, v3;
            if(n>3)
            for(int i=1;i<size+1;i++){
                v3 = size;
                v2 = size-1;
                v1 = i;
                if(v2 == v1 || v1 == v3){
                    while(size>3){
                        v3 = size;
                        v2 = size-1;
                        v1 = size-2;
                        steps.push_back({v3, v2, v1});
                        swap(p, v2, v3);
                        swap(p, v2, v1);
                        size-=2;
                    }
                    break;
                }
                
                steps.push_back({v3, v2, v1});
                steps.push_back({v3, v2, v1});
                swap(p, v1, v2);
                swap(p, v3, v2);
                size--;       
            }
            v1 = p[0], v2 = p[1], v3 = p[2];
            bool flag = false;
            if(v1==1 && v2==2 && v3 == 3){
                flag = true;
            }
            else if(v1==3 && v2==1 && v3 == 2){
                flag = true;
                steps.push_back({3, 2, 1});
                steps.push_back({3, 2, 1});
            }
            else if(v1==2 && v2==3 && v3==1){
                flag = true;
                steps.push_back({3, 2, 1});
            }
            if(flag && steps.size()<=k){
                cout<<steps.size()<<endl;
                for(int i =0;i<steps.size();i++){
                    cout<<steps[i].c<<" "<<steps[i].b<<" "<<steps[i].a<<endl;
                }
            }
            else{
                cout<<"-1"<<endl;
            }
            //display(p2, n);
        }
        else{
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
                    //cout<<j<<" ";
                    cycle[cs].push_back(j);
                    vis[j] = true;
                    j = p[j-1].first;
                }
                cs++;
            }
            //cout<<" cycle formed"<<endl;
            p.clear();
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
                //cout<<c.size()<<endl;
                for(int j=0;j<c.size()-2;j++){
                    int v1, v2, v3;
                    v1 = c[j], v2 = c[j+1], v3 = c[j+2];
                    //cout<<"adding "<<v1<<" "<<v2<<" "<<v3<<endl;
                    steps.push_back({v1, v2, v3});
                    //cout<<*(c.begin() + j + 1)<<endl;
                    //cout<<*(c.begin() + j + 2)<<endl;
                    c.erase(c.begin() + j + 1);
                    c.erase(c.begin() + j + 1);
                    if(c.size()==1){
                        break;
                    }
                    else if(c.size()==2){
                        ans = -1;
                        break;
                    }
                    j--;
                }
                if(ans==-1)
                    break;
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
    }

    return 0;
}
//25 625
//25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 