#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        string a, b;
        cin>>a>>b;
        int n;
        map<string , int> bet;
        cin>>n;
        int min_size=INT_MAX;
        for(int i=0;i<n;i++){
            string s;
            cin>>s;
            min_size = min(min_size, int(s.size()));
            int num;
            cin>>num;
            bet[s] = num;
        }

        // string cc = "some";
        // cout<<cc<<endl;
        // cout<<cc.substr(3, 3)<<endl;

        int max_bet = 0;
        string as, bs;
        vector<string> asv, bsv;
        asv.push_back("");
        bsv.push_back("");
        map<string, int> points;
        map<string, int> vis;
        // cout<<"??";
        // cout<<a;
        int a_size = a.size();
        int b_size = b.size();

        for(int ia = 0;ia<a_size;ia++){
            string as = "";
            as = as + a[ia];
            asv.push_back(as);
            points[as] = bet[as];
            vis[as] = 1;
            for(int ia2=ia+1;ia2<a_size;ia2++){
                as = as + a[ia2];
                //cout<<as<<endl;
                asv.push_back(as);
                if(vis[as]==0){
                    points[as] = bet[as];
                    vis[as] = 1;
                }
            }
        }

        for(int ib = 0;ib<b_size;ib++){
            string bs = "";
            bs = bs + b[ib];
            bsv.push_back(bs);
            points[bs] = bet[bs];
            vis[bs] = 1;
            for(int ib2=ib+1;ib2<b_size;ib2++){
                bs = bs + b[ib2];
                //cout<<bs<<endl;
                bsv.push_back(bs);
                if(vis[bs]==0){
                    points[bs] = bet[bs];
                    vis[bs] = 1;
                }
            }
        }

        string sub;
        points[""] = 0;
        for(int ia=0;ia<asv.size();ia++){
            as = asv[ia];
            int curr_bet = points[as];
            for(int ib=0;ib<bsv.size();ib++){
                bs = bsv[ib];
                sub = as + bs;
                curr_bet += points[bs];
                
                if(vis[sub]==0){
                    for(int i=0;i<as.size();i++){
                        string sub_sub = sub.substr(i, sub.size()-1) + bs[bs.size()-1]; 
                        curr_bet += bet[sub_sub];
                    }
                    points[sub] = curr_bet;

                    vis[sub] = 1;
                }
                else{

                }


                
                

            }

        }







        // for(int ia = 0;ia<a_size;ia++){
        //     //cout<<"?";
        //     string as = "";
        //     //if(ia!=-1)
        //         as = as + a[ia];
        //     for(int ia2=ia;ia2<a_size;ia2++){
        //         if(ia!=ia2)
        //             as = as + a[ia2];
        //             int bet_as = 0;
        //             int vis_as = vis[as];
        //             if(vis_as!=0)
        //                 bet_as = points[as];
        //         for(int ib=0;ib<b_size;ib++){
        //             string bs = "";
        //             if(ib!=-1)
        //                 bs = bs + b[ib];
        //             for(int ib2=ib;ib2<b_size;ib2++){
        //                 if(ib!=ib2)
        //                     bs = bs + b[ib2];
        //                 int bet_bs = 0;
        //                 int vis_bs = vis[bs];
        //                 if(vis_bs!=0)
        //                     bet_bs = points[bs];

        //                 string news = as + bs;
        //                 cout<<news<<endl;

        //                 if(vis_as==0){
        //                     for(int i=0;i<as.size();i++){
                                
        //                     }

        //                     vis[as] = 1;
        //                     vis_as = 1;
        //                 }
        //                 if(vis_bs==0){

        //                     vis[bs] = 1;
        //                     vis_bs = 1;
        //                 }
                        
        //             }
        //         }

        //     }
        // }



        // for(int i=0;i<a.size();i++){
        //     for(int j=0;j<=a.size()-i;j++){
        //         as = a.substr(i, j);
        //         for(int k=0;k<b.size();k++){
        //             for(int l=0;l<=b.size()-k;l++){
        //                 bs = b.substr(k, l);
        //                 //as = as[i], bs = bsv[j];
        //                 string news = as+bs;
        //                 if(news.size()<min_size)
        //                     continue;
        //                 //cout<<"checking for "<<news<<endl;
        //                 int curr_bet=0;
        //                 if(points[news]==0){
        //                     for(int x=0;x<news.size();x++){
        //                         for(int y=1;y<=news.size()-x;y++){
        //                             string check = news.substr(x, y);
        //                             curr_bet += bet[check];
        //                             // if(bet[check]>0)
        //                             //     cout<<"adding "<<bet[check]<<" for "<<check<<endl;
        //                         }
        //                     }
        //                     points[news] = curr_bet;
        //                 }
        //                 max_bet = max(curr_bet, max_bet);                   
        //             }
        //         }
        //     }
        // }
        //a.clear();
        //cout<<"bruh moment";

        // for(int i=0;i<b.size();i++){
        //     for(int j=1;j<=b.size()-i;j++){
        //         bs = b.substr(i, j);
        //         bsv.push_back(bs);
        //     }
        // }
        //b.clear();
        //cout<<"sub generated"<<endl;
        

        // for(int i=0;i<asv.size();i++){
        //     for(int j=0;j<bsv.size();j++){
        //         as = asv[i], bs = bsv[j];
        //         if(as=="" && bs=="")
        //             continue;
        //         string news = as+bs;
        //         //cout<<"checking for "<<news<<endl;
        //         int curr_bet=0;
        //         if(points[news]==0){
        //             for(int x=0;x<news.size();x++){
        //                 for(int y=1;y<=news.size()-x;y++){
        //                     string check = news.substr(x, y);
        //                     curr_bet += bet[check];
        //                     // if(bet[check]>0)
        //                     //     cout<<"adding "<<bet[check]<<" for "<<check<<endl;
        //                 }
        //             }
        //             points[news] = curr_bet;
        //         }
            
        //         max_bet = max(curr_bet, max_bet); 
        //     }
        // }

        cout<<max_bet<<endl;

    }
    return 0;
}