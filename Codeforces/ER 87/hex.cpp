#include<bits/stdc++.h>
using namespace std;

#define PI 3.14159265
typedef long long ll;

int main(){
    int t;
    cin>>t;
    while(t--){
        double n;
        cin>>n;
        double param, result;
        param = 90.000000/n;
        result = tan ( param * PI / 180.0 );
        result = 1.000000/result;
        cout<<setprecision(10)<<result<<endl;
    }
    return 0;
}