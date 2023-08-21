#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N,M;
  cin >> N >> M;
  vector<int> A(M);
  vector<int> B(M);
  set<int> S;
  rep(i, M) {
    cin >> A[i] >> B[i];
    S.insert(B[i]);
  }
  if(N - S.size() == 1) {
    rep(i, N) if (!S.count(i + 1)) cout << i + 1 << endl;
  }else{
    cout << -1 << endl;
  }
}