#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        long long a, b;
        cin>>a>>b;
        long long n;
        cin>>n;
        long long start, end;
        start = a;
        string res;
        end = b;
        while(start<=end){
            long long mid = (end+start)/2 ;
            cout<<mid<<endl;
            fflush(stdout); 
            cin>>res;
            if(res=="CORRECT"){
                break;
            }
            else if(res=="WRONG_ANSWER"){
                return 0; 
            }
            else if (res=="TOO_SMALL"){
                start = mid+1;
            }
            else if(res=="TOO_BIG"){
                end = mid-1;
            }

        }
    }
    return 0;
}