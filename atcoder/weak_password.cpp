#include <iostream>
using namespace std;
int main(){
	string a;
	cin >> a;
	int ct=0;
	int flag=0;
	int cur,nex;
	for(int i=0;i<4;i++){
	cur=(int)a[i]+1-'0';
	nex=(int)a[i+1]-'0';

	if(cur%10==nex%10)
	ct+=1;       
	if( a[i+1]==a[i])
		flag++;
	}
	if(flag!=3 and ct!=3) cout <<"Strong";
	else
	cout<<"Weak";
}
