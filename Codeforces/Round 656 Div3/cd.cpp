#include <iostream>
#include <sstream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;

class Solution {
public:
    int getMinimumCds(int n, int l, int c) {
        // Solution goes here..
        if(l>c){
    		return -1;
        }
        if(l==c){
        	if(n==1)
        		return 1;
        	return -1;
        }

    	int numcd = 1;
    	int cap = 0;
    	int songs = 0;
    	int previ = -1;
    	for(int i=0;i<n-1;i++){
    		int extra = 0;
    		if(i==n-2)
    			extra = 1;
    		if((cap + l +1<= c )&& ((i<=n-2 && cap+ 2*l + 2 - extra <=c) || (songs + 1)%7!=0 )){
    			cap = cap + l + 1;
    			songs++;
    		}
    		else{
    			if(previ == i){
    				numcd = -1;
    				break;
    			}
    			cap = 0;
    			numcd++;
    			songs = 0;
    			previ = i;
    			i--;
    		}
    	}
    	if(numcd!=-1){
	    	if((cap + l<= c )&& (songs + 1)%7!=0 ){
	    			songs++;
	    		}
	    	else{
	    			numcd++;
	    		}
    	}
    	return numcd;
    }
};

int main() {
    string str;
    while (getline(cin, str)) {     
        string inpArr[3];
        int i = 0;
        stringstream ssin(str);
        while (ssin.good() && i < 3){
            ssin >> inpArr[i];
            ++i;
        }
        
        int n = stoi(inpArr[0]);
        int l = stoi(inpArr[1]);
        int c = stoi(inpArr[2]);
        
        int ret = Solution().getMinimumCds(n, l, c);

        string out = to_string(ret);
        cout << out << endl;
    }
    return 0;
}