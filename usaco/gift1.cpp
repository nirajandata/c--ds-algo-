/*  
id: nirajan1 
TASK:gift1 
LANG: C++
*/
#include <bits/stdc++.h>
#include <fstream>
using namespace std;
int main(){
ifstream fin("gift1.in");
ofstream fout("gift1.out");
map<string,int> names ;
int np;
fin >> np;
int values[np];
string nm[np];
string local_name;
string hait;
for(int i=0 ;i<np;++i){
fin >> local_name;
nm[i]=local_name;
names[local_name]=0;
}
int total;
string person;
int amount,j;
for(int i=0 ;i<np;++i){
fin >> person;
fin >> amount >> j;
if(j==0) continue;
total=amount/j;
names[person]-=total*j;
for(int k=0;k<j;k++){
fin >> hait;
names[hait]+=total;

}
}
for(int i=0;i<np;i++){
	fout <<nm[i] << " " <<names[nm[i]] <<"\n"; 
}
return 0;}
