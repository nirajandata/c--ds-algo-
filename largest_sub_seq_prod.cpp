#include <bits/stdc++.h>
using namespace std;
tuple<int,int> max_min(vector<long long> a, long long  nu){
	int lmin, lmax;
	sort(a.rbegin(),a.rend());
	lmax=a[0];
	for(int j=1;j<nu;j++){
	if(a[j]<lmax) 
	{
	 lmin=a[j];
	 break;
	}
	}
	tuple<int,int> t{lmin,lmax};
 	return t;

}
int main(){
long long input,t,n,min,max;
cin >>t ;
vector<long long> v;
for(int i=0;i<t;i++){
  cin >>n;
  for(int k=0;k<n;k++){
	  cin >> input;
	  v.push_back(input);
  }
  tie(min,max)=max_min(v,n);
  max=min*max;
  cout <<max <<"\n";
}
}
