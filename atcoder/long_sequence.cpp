#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >>n;
	vector<long long> a(n);
	for(int i=0;i<n;i++) cin >> a[i];
	long long x;
	cin >> x;
	long long su=0,mul,val,its;
	for(long long v:a) su+=v;
	its=x/su;
	mul=its*n;
	val=its*su;
	for(auto va:a){
	val+=va;
	mul++;
	if(val>x){
		break;
	}
	 
	}
	
	cout <<mul;
	return 0;
}
