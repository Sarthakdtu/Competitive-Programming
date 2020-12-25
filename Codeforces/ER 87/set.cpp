#include<bits/stdc++.h>
using namespace std;


typedef long long ll;

int main(){
    
        ll n, q;
        cin>>n>>q;
        int x;
        map<int, int> arr;
        //memset(arr, 0, sizeof(arr));
        for(int i=0;i<n;i++){
            cin>>x;
           
                arr[x] ++;
            // else
            //     arr[x]++;
        }
        map<int, int> ::iterator itr;
        int size = n;
        for(int i=0;i<q;i++){
            cin>>x;
            if(x>0){
                arr[x]++;
            }
            else{
                x = -x;
                int count=0;
                for(itr=arr.begin();itr!=arr.end();itr++){

                    count += itr->second;
                    if(x<=count){
                        //cout<<"Removing "<<itr->first<<endl;
                        itr->second--;
                        if(itr->second==0){
                            arr.erase(itr);
                            itr--;
                        }
                        size--;
                        break;
                    }
                }
            }
        }

        if(size!=0){
             itr = arr.begin();
             cout<<itr->first;
        }
        else 
            cout<<0;
        cout<<endl;
    
    return 0;
}