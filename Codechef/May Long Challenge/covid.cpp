#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x[n];
        for(int i=0;i<n;i++)
            cin>>x[i];
        int diff[n];
        for(int i=1;i<n;i++){
            diff[i] = x[i] - x[i-1];
           // cout<<" "<<diff[i];
        }
        //cout<<endl;
        diff[0] = INT_MAX;
        
        int minc=n, maxc = 1;
        for(int i=0;i<n;i++){
            int aff=1;
            //cout<<"Affecting "<<x[i]<<endl;
                //fwd
                for(int j=i+1;j<n;j++){
                    if(diff[j]<=2){
                        aff++;
                    }
                    else
                        break;
                }

                for(int j=i;j>-1;j--){
                    if(diff[j]<=2){
                        aff++;
                    }
                    else
                        break;
                }
            
            maxc = max(maxc, aff);
            minc = min(minc, aff);
        }


        cout<<minc<<" "<<maxc<<endl;
    }


    return 0;
}