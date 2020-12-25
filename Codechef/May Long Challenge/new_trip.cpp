#include<bits/stdc++.h>
using namespace std;
struct triplet{
    int a;
    int b;
    int c;

};

void swap_(int arr[], int i , int j){
    i--;
    j--;
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;

}

void display(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n;
        vector<pair<int, int> > p(n);//, p2[n];
        int sp[n];
        for(int i=0;i<n;i++){
            //cin>>p[i].first;
            //p[i].second = i;
            sp[i] = i+1;
        }
       // sort(p.begin(), p.end());
        //vector<pair<int, int> > sp;
        //sort(sp, sp+n);
        int a, b, c;
        cin>>a>>b>>c;
        while(a!=0 && b!=0 && c!=0){
            swap_(sp, a, b);
            swap_(sp, b, c);
            cin>>a>>b>>c;
        }
        display(sp, n);
         for(int i=0;i<n;i++){
            p[i].first = sp[i];
            p[i].second = i;
        }
        sort(p.begin(), p.end());
        vector<pair<int, int> > steps;

        for(int i=0;i<n;i++){
            if(i==p[i].second)
                continue;
            
            int src = i;
            int dest = p[i].second;
            cout<<"Have to swap "<<src+1<<" "<<dest+1<<endl;
            steps.push_back({min(src+1, dest+1), max(src+1, dest+1)});
            swap(p[src].first, p[dest].first);
            swap(p[src].second, p[dest].second);

            if(i!=p[i].second)
                --i;
        }
        cout<<steps.size()<<endl;
        for(int i=0;i<steps.size();i++)
            cout<<steps[i].first<<" "<<steps[i].second<<endl;
        
    }

    return 0;
}
//25 625
//25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 