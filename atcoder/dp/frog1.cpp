#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
 
  ll n,h[(ll)1e5],dp[(ll)1e5];
  cin >>n;
  for(int i=0;i<n;i++){
  cin >> h[i];
    dp[i]=(ll) 1e10;
  }
  dp[0]=0;
  for(int i=0;i<n;i++){
    if(i+1<n) dp[i+1]=min(dp[i+1],dp[i]+abs(h[i]-h[i+1]));
    if(i+2<n) dp[i+2]=min(dp[i+2],dp[i]+abs(h[i]-h[i+2]));
  }
  cout <<dp[n-1];
return 0;
}
