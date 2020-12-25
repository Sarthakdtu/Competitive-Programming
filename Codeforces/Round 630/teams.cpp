#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans=0;
        int *arr = new int[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        if(n==1){
            cout<<"0"<<endl;
            continue;
        }
            
        sort(arr, arr+n);
        vector<pair<int, int> > m;
        int prev = arr[0];
        int unq=1;
        int curr_c, all_c=0, min_c=INT_MAX, max_c=1;
        for(int i=1;i<n;i++){
            curr_c=1;
            if(prev==arr[i]){
                //unq--;
                while(i<n && prev==arr[i]){
                    i++;
                    curr_c++;
                    //all_c++;
                }
                if(i<n)
                    i--;
                all_c += curr_c;
                m.push_back({prev, curr_c});
                cout<<prev<<" has "<<curr_c<<endl;
                min_c = min(curr_c, min_c);
                max_c = max(max_c, curr_c);
            }
            else{
                unq++;
            }
            prev = arr[i];
        }
        int w1 = n - all_c;
        cout<<n<<" "<<all_c<<" "<<unq<<endl;
        //int unq = n - all_c;
        if(max_c<=w1){
            ans = max_c;
        }
        else{
            ans = 0;
            for(int i=0;i<m.size();i++){
                int freq = m[i].second;
                //cout<<freq<<" "<<endl;
                if(freq - 1 == unq){
                   // cout<<"Choosing "<<freq<<" over "<<ans<<endl;
                    ans = unq;
                    break;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}