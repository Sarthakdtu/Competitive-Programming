#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int msb(bool arr[]){
    for(int i=40;i>-1;i--){
        if(arr[i]){
            return i;
        }
    }
    return -1;
}

ll bd(bool brep[]){
    ll res = 0;
        for(int i=0;i<41;i++){
            if(brep[i])
                res += pow(2, i);
        }
    return res;
}

bool* andop(bool a[], bool b[]){
    bool ad[41];
    for(int i=0;i<41;i++){
        ad[i] = a[i] & b[i];
    }
    return ad;
} 

bool* orop(bool a[], bool b[]){
    bool ad[41];
    for(int i=0;i<41;i++){
        ad[i] = a[i] | b[i];
    }
    return ad;
} 

int main(){

    int t;
    cin>>t;
    while(t--){
        ll x, y, l, r;
        cin>>x>>y>>l>>r;
        if(x==0 || y==0 || r==0){
            cout<<0<<endl;
            continue;
        }

        ll ogr = r, ogl = l;
        bool xb[41], yb[41], ans[41], rb[41], lb[41];
        for(int i=0;i<41;i++){
            xb[i] = x&1;
            yb[i] = y&1;
            lb[i] = l&1;
            rb[i] = r&1;
            x = x>>1;
            y = y>>1;
            l = l>>1;
            r = r>>1;
            ans[i] = xb[i] | yb[i];
        }

        ll res = bd(ans);
       
        if(res>ogr){
            int msb_res = msb(ans);
            int msb_r = msb(rb);
            r = ogr;
            l = ogl;

            if(msb_res==msb_r){

            }
            else{
                for(int i=41;i>msb_res;i--){
                    ans[i] = false;
                }
                for(int i=msb_r-1;i>-1;i--){
                    if(rb[i])
                        break;
                    ans[i] = false;
                }
                //ans[msb_res] = false;
                res = bd(ans);

            }
        }
       
        cout<<res<<endl;
        

        // for(int i=0;i<41;i++)
        //     cout<<xb[i]<<" ";
        // cout<<endl;
        // for(int i=0;i<41;i++)
        //     cout<<yb[i]<<" "; 
        // cout<<endl;
        // for(int i=0;i<41;i++)
        //     cout<<ans[i]<<" ";
        // cout<<endl;

         //cout<<res<<endl;
    }

    return 0;
}