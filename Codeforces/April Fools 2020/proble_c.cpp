#include<bits/stdc++.h>
using namespace std;

int main(){
    string str[6] = {"...And", "after", "happily", "lived", "ever", "they"};
    string jumb[6] = {"...And", "they", "lived", "happily", "ever","after"};
    for(int j=0;j<6;j++)
    for(int i=0;i<str[j].size();i++){
        int a = str[j][i]-46;
        cout<<a<<" ";
    }
    cout<<endl;
    for(int j=0;j<6;j++)
    for(int i=0;i<jumb[j].size();i++){
        int a = jumb[j][i]-46;
        cout<<a<<" ";
    }
    cout<<endl;
    for(char i='a';i<='z';i++)
        cout<<i-97<<" "<<i<<" ";

    return 0;
}