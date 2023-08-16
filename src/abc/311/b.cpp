#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N,D;
  cin >> N >> D;
  vector<string> S(N);
  rep(i, N) cin >> S[i];
  int ans = 0;
  int calc = 0;
  rep(d, D){
    bool can = true;
    rep(n, N) if(S[n][d] == 'x') can = false;
    if(can) calc++;
    if(ans < calc) ans = calc;
    if(!can) calc = 0;
  }
  cout << ans << endl;
}