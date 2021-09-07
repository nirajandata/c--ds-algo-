//https://atcoder.jp/contests/abc213/tasks/abc213_b
#include <bits/stdc++.h>
using  namespace std;
int main(){
	long long n;
	vector<array<long long,2>> a;
	cin >>n;
	for(long long i=1;i<=n;i++){
		long long input;
		cin >>input;
		a.push_back({input,i});
	}
	sort(a.begin(),a.end());
//	for(auto ac:a){
//		cout <<ac[0] <<" " << ac[1];
//	}
	cout <<a[n-2][1];
	return 0;
}
