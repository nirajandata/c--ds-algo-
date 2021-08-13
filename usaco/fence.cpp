#include <iostream>
#include <fstream>
using namespace std;
int main(){
ifstream fin ("paint.in");
ofstream fout ("paint.out");
int a,b,c,d, res;
fin >>a >>b;
fin >>c >>d;
res=(b-a)+(d-c)-max(min(d,b)-max(a,c),0);
fout <<res;
return 0;
}
