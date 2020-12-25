#include<bits/stdc++.h>
using namespace std;


int main(){
    //for(int t=0;t<4;t++){
    string num;
    cin>>num;
    long long n =pow(16, 7) * 10; 
    for(int i=6;i>0;i--){
        char ch = num[i];
        long long curr = ch - '0';
        n = n + pow(16, i-6)*curr;
        //cout<<curr<<" ";
    }
    cout<<(n&1);
    

    return 0;
}
/*
A278832

A089956

A089957

A144045
*/