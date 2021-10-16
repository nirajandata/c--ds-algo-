#include <bits/stdc++.h>
using namespace std;
int main(){
	string s,t;
	cin >> s >> t;
	//vector<char> a,b;
	int sz=s.size();
	int fl=0;
	if(s==t) fl=1;
	else{
	  int count=0;
	  for(int i=0;i<sz;i++){
		  if(s[i]!=t[i] and s[i+1]!=t[i+1]){
		    if(s[i+1]==t[i] and s[i]==t[i+1]) fl=1; 
		    break;
		   //a.push_back(s[i]);

		   //b.push_back(t[i]);
		  } 
	  }
	  /*if(count==1){
		  sort(a.begin(),a.end());
		  sort(b.begin(),b.end());
		  if(a==b) fl=1;
	  } 
	 */ 
	}
	if(fl) cout << "Yes";
	else cout << "No";
	return 0;
}
