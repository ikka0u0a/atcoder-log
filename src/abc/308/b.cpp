#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N,M;
  cin >> N >> M;
  vector<string> C(N);
  vector<pair<string,int>> P(M);
  int P0;
  rep(i, N) cin >> C[i];
  rep(i, M) cin >> P[i].first;
  cin >> P0;
  rep(i, M) cin >> P[i].second;
  int ans = 0;
  rep(n, N){
    int c = P0;
    rep(m, M) if(C[n] == P[m].first) c = P[m].second;
    ans += c;
  }
  cout << ans << endl;
}