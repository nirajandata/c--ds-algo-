#include <bits/stdc++.h>
using namespace std;
 
void solve(){
int ps;
string ans="hello" ,st;
cin >>st;
int  j=0;
 
for(int i=0;i<=st.size();i++){
 
if(st[i]==ans[j])
{
  ++j;
}
if(j==5)
	break;
}
if(j==5)
cout << "YES";
else
cout <<"NO";
}
int main (){
ios_base::sync_with_stdio(false);
cin.tie(0);
solve();
}
