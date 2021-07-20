/*  
id: nirajan1 
TASK: ride
LANG: C++
*/
#include <bits/stdc++.h>
#include <fstream>
using namespace std;
int chars(string str){
int products=1;
for(int i=0;i<str.size();i++){
		products *= str[i]-'A'+1;
}
return products;
}
int main(){
ofstream fout("ride.out");
ifstream fin("ride.in");
string a,b;
fin >> a >> b;
int st1=chars(a);
int st2=chars(b);
fout << (st1%47==st2%47 ? "GO" : "STAY") <<endl;
exit(0);
}

