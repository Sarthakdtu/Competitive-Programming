#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n0, n1, n2;
        cin>>n0>>n1>>n2;
        string ans="";
        int a = n0;
        if(n0>0)
            ans = "0";
        while(n0--){
            ans += "0";
        }

        if(n1>0 && a>0){
            ans += "1";
            n1--;
        }

        int b = n1;
        if(n1>0 && a==0){
             
            b=(n1 + 1)/2;
            //10101
            while(b--){
                ans += "01";
            }
            if(b%2==0){
                ans += "0";
            }
        }
        



        
        




    }

    return 0;
}
