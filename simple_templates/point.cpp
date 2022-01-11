#include <bits/stdc++.h>
using namespace std;
struct P{
 int x,y;
 void r(){
	 cin >> x >>y;
 }
 P  operator -(const P& b)const {
	return P{x-b.x,y-b.y};
 }
 void operator -=(const P& b) {
	 x-=b.x;
	 y-=b.y;
 }
 long long operator *(const P& b) const{
	 return (long long)x*b.y - (long long) b.x*y; 
 }
 long long triangle(const P& b ,  const P& c) const{
	return (b-*this) * (c-*this);
 }
};
