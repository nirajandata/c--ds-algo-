#include <bits/stdc++.h>
using namespace std;
int counter[3];
int main(){
freopen("shell.in","r",stdin);
freopen("shell.out","w",stdout);
int n,a,b,c;
cin >>n;
int location[3];
for(int i=0;i<n;i++){
	location[i]=i;
}
for(int i=0;i<n;i++){
	cin >>a >>b>>c;
	--a;--b;--c;
	swap(location[a],location[b]);
	counter[location[c]]++;
}
int max_val=max({counter[ 0],counter[1],counter[2]});
cout <<max_val;
return 0;
}
