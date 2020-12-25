/*
K-th Beautiful String
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
For the given integer n (n>2) let's write down all the strings of length n which contain n−2 letters 'a' and two letters 'b' in lexicographical (alphabetical) order.

Recall that the string s of length n is lexicographically less than string t of length n, if there exists such i (1≤i≤n), that si<ti, and for any j (1≤j<i) sj=tj. The lexicographic comparison of strings is implemented by the operator < in modern programming languages.

For example, if n=5 the strings are (the order does matter):

aaabb
aabab
aabba
abaab
ababa
abbaa
baaab
baaba
babaa
bbaaa
It is easy to show that such a list of strings will contain exactly n⋅(n−1)2 strings.

You are given n (n>2) and k (1≤k≤n⋅(n−1)2). Print the k-th string from the list.

Input
The input contains one or more test cases.

The first line contains one integer t (1≤t≤104) — the number of test cases in the test. Then t test cases follow.

Each test case is written on the the separate line containing two integers n and k (3≤n≤105,1≤k≤min(2⋅109,n⋅(n−1)2).

The sum of values n over all test cases in the test doesn't exceed 105.

Output
For each test case print the k-th string from the list of all described above strings of length n. Strings in the list are sorted lexicographically (alphabetically).

Example
input
7
5 1
5 2
5 8
5 10
3 1
3 2
20 100
output
aaabb
aabab
baaba
bbaaa
abb
bab
aaaaabaaaaabaaaaaaaa
*/
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        long long k;
        cin>>n>>k;
        string ans="";
        ll start = 1;
        ll end = n;
        ll m = -1;
        while(start< end){
            ll mid = (end-start)/2 + start;
            ll sum = (mid*(mid+1))/2;
            ll sum_1 = (mid*(mid-1))/2;
            //cout<<sum_1<<" "<<k<<" "<<sum<<endl;
            
            if(k>=sum_1 && k<=sum){
                m = mid;
                if(k==sum){
                    m++;
                }
                break;
            }
            else if(k>sum){
                start = mid+1;
            }
            else{
                end = mid;
            }
        }
        //cout<<"mid: "<<m<<endl;

        for(int i=0;i<n;i++)
            ans = ans + 'a';

        if(m*(m-1)/2 == k){
            m--;
            ans[n-m-1] = 'b';
            ans[n-m] = 'b';
        }   
        else{
            ans[n-m-1] = 'b';
            //cout<<"idx curr: "<<n - (k - (m*(m-1)/2) - 1) - 1<<endl;
            ans[n - (k - (m*(m-1)/2) -1 ) - 1] = 'b';
            
        }
       
        cout<<ans<<endl;
    }

    return 0;
}