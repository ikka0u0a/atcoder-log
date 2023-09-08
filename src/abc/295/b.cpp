#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int R,C;
  cin >> R >> C;
  vector<string> B(R);
  rep(i,R) cin >> B[i];
  rep(i,R) {
    rep(j,C){
      if(B[i][j] != '#' && B[i][j] != '.'){
        int num = B[i][j] - '0';
        B[i][j] = '.';
        rep(k,R)rep(l,C){
          if((abs(i - k) + abs(j - l)) <= num && B[k][l] == '#') B[k][l] = '.';
        }
      }
    }
  }
  rep(i,R) cout << B[i] << endl;
}