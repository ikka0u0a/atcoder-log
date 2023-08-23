#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N,M;
  cin >> N >> M;
  vector<vector<string>> A(M, vector<string>(N));
  rep(i, M) rep(j, N) cin >> A[i][j];
  set <string> S;
  rep(i, M) rep(j, N - 1) {
    S.insert(A[i][j] + A[i][j + 1]);
    S.insert(A[i][j + 1] + A[i][j]);
  }
  int ans = 0;
  for(int i = 1; i <= N; i++){
    for(int j = 1; j <= N; j++){
      if(i == j) continue;
      else {
        string t = to_string(i) + to_string(j);
        if(!S.count(t)) ans++;
      }
    }
  }
  if(ans != 0) ans /= 2;
  cout << ans << endl;
}