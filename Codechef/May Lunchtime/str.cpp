#include<bits/stdc++.h>
#define all(s) s.begin(), s.end()
using namespace std;
typedef long long ll;
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
       string a, b;
       cin>>a>>b;
       int fb[26], fa[26];
       vector<vector<int> > idxa(26);
       vector<vector<int> > idxb(26);
       memset(fa, 0, sizeof(fa));
       memset(fb, 0, sizeof(fb));
       vector<int> mis;
       bool flag = true;
       for(int i=0;i<n;i++){
           fb[b[i]-'a']++;
           fa[a[i]-'a']++;
           if(a[i]<b[i]){
               flag = false;
               break;
           }
       }
        if(!flag){
           cout<<"-1"<<endl;
           continue;
       }
       
       for(int i=0;i<26;i++){
           if(fa[i]==0 && fb[i]!=0){
               flag = false;
               break;
           }
       }


       if(!flag){
           cout<<"-1"<<endl;
           continue;
       }
       vector<int>::iterator it, en;
       vector<vector<int> > moves;
       vector<int> res;
       int idc = 0;
       for(char ch = 'z'; ch>='a'; ch--){
           int i = ch-'a';
           res.clear();
           for(int k=0;k<n;k++){
               if(b[k]==ch && a[k]!=ch)
                    res.push_back(k);
               else if(a[k]==ch)
                    idc = k; 
           }
           if(res.size()==0){
               continue;
           }
           else{
               
               //en = set_difference(all(idxb[i]), all(idxa[i]), res.begin());
               for (int m= 0;m<res.size(); m++){
                   a[res[m]] = ch;
               }
               res.push_back(idc);
               sort(all(res));
               moves.push_back(res);

           }
       }
       if(moves.size()==0){
           cout<<0<<endl;
           continue;
       }
        cout<<moves.size()<<endl;
        for(int i=0;i<moves.size();i++){
            cout<<moves[i].size()<<" ";
            for (int m= 0;m<moves[i].size(); m++){
                   cout<<moves[i][m]<<" ";
            }
            cout<<endl;
        }
       
       
        


    }

    return 0;

}