/* 
id: nirajan1
TASK: friday
LANG: C++
 */
#include <bits/stdc++.h>
using namespace std;
int leap_year(int val){
if(val%100==0){
return (val%400==0);
}
else  return (val%4==0);
return 0;
}
int main(){
ifstream fin("friday.in");
ofstream fout("friday.out");
int n,val=0,months[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int days[7]={};
fill_n(days,7,0);
fin >>n;
for (int year=1900;year<=(1900+n-1);year++){
 for (int month=0;month<12;month++){
	 days[(val+12)%7]++;
	 if(month==1){
		if(leap_year(year)){
 	          val=(val+months[month]+1)%7;
	           continue;	  
		}
	 }
	 val=(val+months[month])%7;
	 
 }
}
fout << days[5] <<" " <<days[6] <<" ";
for(int i=0;i<4;i++) fout  <<days[i] <<" ";
fout <<days[4];
fout <<"\n";
return 0;
}
