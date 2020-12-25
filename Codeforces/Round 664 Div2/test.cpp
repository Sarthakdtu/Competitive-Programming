#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
  freopen("cnsl/input.txt", "r", stdin);
  freopen("cnsl/output.txt", "w", stdout);
  #endif
  string s;
  cin>>s;
  string a;
  a+=s[0];
  int i=1;
  while(i<s.size())
  {
    while(i<s.size()&&s[i]==s[i-1])
      i++;  
    if(i==s.size())
    break;
    a+=s[i];
    i++;
  }
  string b=a;
  a+='{';
  b+='A';
  i=1;
  int ans=0;
  while(i<a.size())
  {
    if(a[i]>a[i-1])
    { 
      while(i<a.size()&&a[i]>a[i-1])
      i++;
      ans++;
      i++;
    }
    else
    { 
      while(i<a.size()&&a[i]<a[i-1])
      i++;
      ans++;
      i++;
    }
  }
  i=1;
  int temp=0;
  while(i<b.size())
  {
    if(b[i]>b[i-1])
    { 
      while(i<b.size()&&b[i]>b[i-1])
      i++;
      temp++;
      i++;
    }
    else
    { 
      while(i<b.size()&&b[i]<b[i-1])
      i++;
      temp++;
      i++;
    }
  }
  ans=min(ans,temp);
  cout<<ans;
}