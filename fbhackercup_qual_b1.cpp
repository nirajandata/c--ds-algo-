#include <bits/stdc++.h>

using namespace std;

const int xaxis[4] {0, 1, 0, -1};
const int yaxis[4] {1, 0, -1, 0};

int main() {
    int t;
    cin >> t;
    string po = "Possible", im = "Impossible";
    for (int i = 1; i <= t; i++) {
      cout << "Case #" << i << ": ";
      int r, c;
      cin >> r >> c;
      bool fl = 1;
      vector < vector < bool >> vis(r, vector < bool > (c));
      vector < vector < char >> s(r, vector < char > (c));
      for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
          cin >> s[i][j];
          if (s[i][j] == '^')
            fl = 0;
        }
      }
          if (min(r,c)==1) {
                  if(fl){
                          cout << po <<endl; 
                          for(int i=0;i<r;i++){
                                  for(int j=0;j<c;j++) cout << s[i][j];
                                  cout << endl;
                          }
                  }
                  else
                           cout << im << endl;
                  continue;
          }

          cout << po << endl;
          for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cout << "^";
            }
            cout << endl;
          }
        }
        
        return 0;
}
