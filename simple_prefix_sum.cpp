#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int n,q;
	cin >>n >>q;
	vector<ll> a;
	for(int i=0;i<n;i++){
		ll input;
		cin >>input;
		a.push_back(input);
	}
	vector<ll> p(n+1);
	for(int i=0;i<n+1;i++){
		p[i+1]=p[i]+a[i];
	}
	int l,r;
	for(int i=0;i<q;i++){
		cin >>l >>r;
		cout <<p[r]-p[l]<<"\n";
	}
	return 0;
}
