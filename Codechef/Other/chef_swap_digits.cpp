#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int m, k;
        cin>>m>>k;
        if(m<k){
            int temp = m;
            m = k;
            k = temp;
        }
        int xa, ya, xb, yb;
        xa = m/10;
        ya = m%10;
        xb = k/10;
        yb = k%10;
        int sum = (10*xa + ya)+(10*xb + yb);
        if(xb<ya)
            sum = max(sum, ( (10*xa + xb)+(10*ya + yb) ));
        if(xa<yb)
            sum = max(sum, ( (10*yb + ya)+(10*xb + xa) ));
        //if(xa == 0 && xb ==0)
        //    sum = m+k;
        cout<<sum<<endl;
    }
    return 0;
}