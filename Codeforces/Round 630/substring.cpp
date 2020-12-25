#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        int n, a, b;
        cin>>n>>a>>b;
        string unq="";
        char ch = 'a';
        for(int i=0;i<b;i++){
            unq += ch;
            ch++;
        }
        
        int r = n/b;
        for(int i=0;i<r;i++){
            s = s + unq;
        }
        r = n%b;    
         s = s + unq.substr(0, r);
        cout<<s<<endl;        
    }
    return 0;    
}