#include<bits/stdc++.h>
#define forn(i, n) for(int i=0;i<n;i++)
using namespace std;
struct act{
    int s;
    int f;
    int idx;
};

bool compare(act a, act b){
    if(a.s==b.s)
        return a.f<b.f;
    return a.s<b.s;
}

int main(){
    int T;
    cin>>T;
    forn(t, T){
        int n;
        cin>>n;
        vector<act> acts(n);
        forn(i, n){
            cin>>acts[i].s>>acts[i].f;
            acts[i].idx = i;
        }
        int j=0, c=0;
        sort(acts.begin(), acts.end(), compare);
        char ans[n];
        bool flag = true;
        string imp = "IMPOSSIBLE";
        forn(i, n){
            act curr  = acts[i];
            if(c<=curr.s){
                ans[curr.idx] = 'C';
                c = curr.f;
            }
            else if(j<=curr.s){
                ans[curr.idx] = 'J';
                j = curr.f;
            }
            else{
                //fans = "IMPOSSIBLE";
                flag = false;
                break;
            }
        }
        cout<<"Case #"<<t+1<<": ";
        if(flag){
            forn(i, n){
                cout<<ans[i];
            }
        }
        else
            cout<<imp;
        cout<<endl;

    }
    return 0;
}