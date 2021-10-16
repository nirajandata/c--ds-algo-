#include <bits/stdc++.h>
using namespace std;
#define ln "\n"
#define ll long long
int main(){
	int a, b;
	cin >> a >>b;
	a=a-b;
	long long val=1;
	for(int i=1;i<a+1;i++){
           val=val*(long long)32; 
	}
	cout << val;
	return 0;
}
