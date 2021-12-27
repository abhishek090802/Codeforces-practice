//Abhishek kumar//
#include<bits/stdc++.h>
using namespace std;
#define ll long long
 int main() {
  int t=1;
  cin>>t;
  while(t--)
  {
    string s;
    cin>>s; int count=0;
    if(s.size()%2!=0)
        cout<<"NO"<<endl;
    else {for(int i=0;i<s.size()/2;i++)
    {
        if(s[i]==s[(s.size()/2)+i])count++;
    }
   if(count==s.size()/2) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
  }
}
return 0;
  } 

 