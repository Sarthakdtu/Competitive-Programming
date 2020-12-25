#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n, m, x, y;
        cin>>n>>m>>x>>y;
        long long cost=0;
        bool flag = false;
        if(2*x<y)
            y = 2*x;
        //vector<string> arr(n);
        for(int i=0;i<n;i++){
            string str;
            cin>>str;
            for(int j=0;j<m-1;j++){
                if(str[j]=='.' && str[j+1]=='.'){
                    cost+=y;
                    str[j] = '-';
                    str[j+1] = '-';
                    j++;
                }
                else if(str[j]=='.'){
                    cost+=x;
                    str[j]='-';
                }
            }
            if(str[m-1]=='.'){
                cost += x;
            }
           
        }
        cout<<cost<<endl;

        


    }
    return 0;
}