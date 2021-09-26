#include <bits/stdc++.h>
using namespace std;
long long solve(int k,string n){
	int num=n.size();
	int val,re=0;
	for(int i=0;i<num;i++){
	val=n[i]-'0';
//	cout << val <<endl;
        if(val!=0)
  	re+=pow(k,i)*val;		
	}
	long long ans= (long long) re;
	return ans;

}
int main(){
	int k;
	string a,b;
	cin >>k;
	cin >> a >>b ;
	reverse(a.begin(),a.end());
	reverse(b.begin(),b.end());
	long long  first=solve(k,a);
        long long  second =solve(k,b);
//	cout << first <<endl;
//	cout << second << endl;
	cout <<first*second;
	return 0;

}
