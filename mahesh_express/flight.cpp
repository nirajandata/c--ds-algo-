#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <fstream>
#define pb push_back
using namespace std;
vector<array<string,5>> read(string local,string destin){
string file_name="data.csv";
vector<array<string,5>> lines;
int found =-1;
ifstream csv;
//pr and date options
csv.open(file_name);
string id,seats,price=" ", loc,dest,date;
string val;
while(getline(csv,id,',')){ 
	
	getline(csv,seats,',');
	getline(csv,loc,',');
	getline(csv,dest,',');
	getline(csv,date,',');
	getline(csv,price,'\n');

  if(loc==local and destin==dest){
	  found =1;
          lines.pb({seats,loc,dest,date,price});
  }
 }
if(found!=1){
	cout <<" Sorry ! We couldn't find any data in our record" <<endl;
}
return lines;
}

class MaheshExpress
{
private:
  string locl,destl;
 
public:
MaheshExpress(string clocal,string cdest){
destl=cdest;
locl=clocal;
}

//int data_parser(string data){
//int time=0;
//int hour, months,day;
//months=0;
//day=0;
//hour=0;
//return time;
//}
// seat-departure-arrival-date-jeff bezos(money)
void show(){
vector<array<string,5>> shows=::read(locl,destl);
for(auto showing:shows){
	int shows=stoi(showing[0]);
	if(shows>29)
	cout <<"Mahesh Express ko "<<shows <<" seat pack vayeko xa" <<endl;
	else{
	cout <<"seat = " <<showing[0] <<endl;
	cout <<"price =" <<showing[4] <<endl;
	cout <<"date= " <<showing[3] <<endl;
	}
	}
	}
};
int main(){
int  sortingval; //date and price
//cout << "Filter values by" <<"\n" <<" (0) price (1) date <<"\n";
cout <<"enter location of departure and arrival " <<"\n";
string mdep,marriv;
cin >>mdep>>marriv;
MaheshExpress flg(mdep,marriv);
flg.show();

return 0;
}
