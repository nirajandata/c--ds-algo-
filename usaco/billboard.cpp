//thanks to usaco.guide
#include <bits/stdc++.h>
using namespace std;
class Sol{
public:
int x1,x2,y1,y2;
int area()
{	return (x2-x1)*(y2-y1);
}};
int total(Sol a, Sol b){
int y=max(min(a.y2,b.y2)-max(a.y1,b.y1),0);
	int x=max(min(a.x2,b.x2)-max(a.x1,b.x1),0);
	return y*x;
}

int main(){
ifstream fin("billboard.in");
ofstream fout("billboard.out");
Sol f,s,t;
fin >>f.x1 >>f.y1 >>f.x2 >>f.y2;
fin >>s.x1 >>s.y1 >>s.x2 >>s.y2;
fin >>t.x1 >>t.y1 >>t.x2 >>t.y2;
fout <<f.area()+ s.area()-total(f,t)-total(s,t);

return 0;
}
