//problem link : https://www.facebook.com/codingcompetitions/hacker-cup/2022/qualification-round/problems/C1
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int n;
        string s;
        cin>>n>>s;
        char t=(s[0]=='.'?'-':'.');
        cout <<"Case #"<<i<<":" << endl;
        for(int k=0;k<n-1;k++){
        cout <<t ;
        for(int j=0;j<=k;j++) cout <<'-' ;
        cout << '.' << endl;
        }

    }

    return 0;
}
