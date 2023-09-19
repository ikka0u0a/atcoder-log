#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N,M;
  cin >> N >> M;
  vector<int> A(N);
  vector<int> B(M);
  rep(i,N) cin >> A[i];
  rep(i,M) cin >> B[i];
  int ans = 0;
  rep(i,M) ans += A[B[i] - 1];
  cout << ans << endl;
}