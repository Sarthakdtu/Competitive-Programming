#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n, a, b, c, d;
        cin>>n>>a>>b>>c>>d;

        int mingw = n*(a-b);
        int maxgw = n*(a+b);

        int maxbw = c+d;
        int minbw = c-d;

        if( maxgw < minbw || mingw > maxbw ){
            cout<<"No"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
        }
        
       



    }
    return 0;
}