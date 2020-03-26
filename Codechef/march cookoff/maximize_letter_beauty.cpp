/*
Chef's fans want to celebrate the special occasion of his birthday, so they are writing letters to him. Chef has received N such letters from N fans (numbered 1 through N). Initially, for each valid i, he assigned a beauty Bi to the letter from the i-th fan (these values may even be negative, for letters that are not written well).

Now, Chef wants you to process Q queries on these letters. There are two types of queries:

Q x y: Chef wants to choose integers l and r such that 1≤l≤x≤y≤r≤N and read all the letters from fans l,l+1,…,r. Find the maximum possible value of the sum of beauties of the letters he reads.
U x v: Chef reevaluates the beauty of the letter from the x-th fan. The new value of Bx becomes v.
Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains two space-separated integers N and Q.
The second line contains N space-separated integers B1,B2,…,BN.
Each of the next Q lines describes a query in the format described above.
Output
For each query of the first type, print a single line containing one integer ― the maximum sum of beauties.

Constraints
1≤T≤5
1≤N,Q≤105
|Bi|≤109 for each valid i
|v|≤109
1≤x≤y≤N
Example Input
1
5 5
-1 2 -2 1 -3
Q 3 5
Q 2 4
U 1 1
Q 2 4
Q 3 5
Example Output
-2
1
2
-1
Explanation
Example case 1: For the first query, Chef should read the letters from fans 2, 3, 4 and 5.
*/