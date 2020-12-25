#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a = n;
        vector<int> ans;
        int count=0;
        while(a>0){
            int rem = a%10;
            if(rem==0){
                ;
            }
            else{
                int b = rem*pow(10, count);
                ans.push_back(b);                
            }
            count++;
            a = a/10;      
        }

        cout<<ans.size()<<endl;
        for(int i=0;i<ans.size();i++)
            cout<<ans[i]<<" ";
        cout<<endl;


    }


    return 0;
}