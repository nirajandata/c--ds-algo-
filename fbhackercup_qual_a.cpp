#include <bits/stdc++.h>
using namespace std;

int main(){
        int t;
        cin>>t;
        for(int i=1;i<=t;i++){
                cout <<"Case #" <<i << ": ";
                int n,k,fl=1;
                cin>>n>>k;
                map<int,int> mp;
                for(int i=0;i<n;i++){
                        int x;
                        cin>>x;
                        mp[x]++;
                        if(mp[x]>2) fl=0;
                }
                if(n>2*k) fl=0;
                cout <<(fl?"YES":"NO") << endl;
        }
        return 0;
}
