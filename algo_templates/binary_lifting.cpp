//thanks benq
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,q;
    cin>>n >>q;
    vector<vector<int>> up(18,vector<int>(n+1));
    
    for(int i=2;i<=n;i++){
        int x;
        cin>>x;
        up[0][i]=x;
    }
    for(int i=1;i<18;i++)
        for(int j=1;j<=n;j++)
            up[i][j]=up[i-1][up[i-1][j]];
    while(q--){
        int x,k;
        cin>>x>>k;
        for(int i=0;i<18;i++) {
            if(k&1) x=up[i][x];
            k>>=1;
        }

        cout<<(x?:-1) << endl;
    }
    return 0;

}
