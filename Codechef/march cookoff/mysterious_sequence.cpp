/*
Chef has invited Alice for his birthday party. Now, Alice is thinking about what to give Chef as a present. She should obviously choose a sequence ― what could possibly be a better birthday gift than a sequence!

After some thinking, Alice chose a sequence of integers A1,A2,…,AN. However, she does not want to simply give this sequence to Chef. Instead, she decided to give Chef a sequence B1,B2,…,BN, where Bi=⋁ij=1Aj for each valid i and ⋁ denotes the bitwise OR operation. Chef can try to generate a sequence A from B, but there could be more than one such possible sequence.

Now, Alice is wondering how many sequences A correspond to the given sequence B. Since this number could be very large, compute it modulo 109+7. Note that it is not guaranteed that the given sequence B was generated from some sequence A.

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains a single integer N.
The second line contains N space-separated integers B1,B2,…,BN.
Output
For each test case, print a single line containing one integer ― the number of possible sequences A modulo 109+7.

Constraints
1≤T≤25
1≤N≤5⋅104
0≤Bi<230 for each valid i
Example Input
2
2
2 3
4
2 6 7 7
Example Output
2
64
Explanation
Example case 1: There are two possible options for A: (2,1) and (2,3).
*/

#include<bits/stdc++.h>
long long mod  = 1000000007;
using namespace std;

int main(){
    int t;
    
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long arr[n];
        long long ans=1;
        for(int i=0;i<n;i++)
            cin>>arr[i];

        for(int i=0;i<30;i++){
            bool found = false;
        for(int i=0;i<n;i++){
            int b = arr[i]&1;

            if(b==1 && !found){
                found = true;
            }
            else if(b==1 && found){
                //int c = n - i - 1;
                //long long p = pow(2, c);
                ans = fmod( ans*2, mod );
                found = true;
            }
            else if(b==0 && found){
                ans = 0;
            }
            arr[i] = arr[i]>>1;
        }
        }
        
        cout<<ans<<endl;
    }

    return 0;
}