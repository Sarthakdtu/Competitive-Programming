/*
Chef just got a box of chocolates as his birthday gift. The box contains N chocolates in a row (numbered 1 through N), where N is even. For each valid i, the i-th chocolate has a sweetness value Wi.

Chef wants to eat all the chocolates in the first half of the box and leave all chocolates in the second half uneaten. Since he does not like chocolates that are too sweet, he will be unhappy if at least one of the chocolates he eats has the maximum sweetness among all the chocolates in the box.

A right cyclic shift by k chocolates (0≤k<N) consists of moving the last k chocolates in the row to the beginning in the same order and moving each of the remaining N−k chocolates k places to the right. Before eating the first half of the chocolates, Chef wants to perform some right cyclic shift in such a way that he will not be unhappy after eating them. Find the number of ways to do this, i.e. the number of valid integers k such that if Chef performs the right cyclic shift by k chocolates and then eats the first half of the chocolates in the box, he does not become unhappy.

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains a single integer N.
The second line contains N space-separated integers W1,W2,…,WN.
Output
For each test case, print a single line containing one integer ― the number of shifts for which Chef does not become unhappy.

Constraints
1≤T≤5
1≤N≤105
N is even
1≤Wi≤105 for each valid i
Example Input
2
6
1 1 2 1 1 1
6
1 1 2 1 1 2
Example Output
3
0
Explanation
Example case 1: The three valid right shifts and the contents of the box for these shifts are:

shift by k=1: (1,1,1,2,1,1)
shift by k=2: (1,1,1,1,2,1)
shift by k=3: (1,1,1,1,1,2)
*/
#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];

        int s = 0;
        bool poss = false;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            s = max(s, arr[i]);
            if(s>arr[i])
                poss  = true;
        }
        int fi=-1, li;
        for(int i=0;i<n;i++){
            if(arr[i]==s){
                if(fi == -1)
                    fi = i;
                li = i;
            }
        }
        int ans=0;
        if(!poss){
            ans = n;
        }
        else if(fi==li){
            ans = n/2;
        }
        else{
            if(li - fi >=n/2){
                ans = 0;
            }
            else{
                ans = (fi - n/2) + (n - li);
                //cout<<fi<<" "<<li;
            }
        }
        cout<<ans<<endl;

    }
    return 0;
}