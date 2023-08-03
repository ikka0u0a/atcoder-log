#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(N),B(M);
  rep(i,N) cin >> A[i];
  rep(i,M){
    int b;
    cin >> b;
    B[i] = b + 1;
  }
  A.insert(A.end(), B.begin(), B.end()); // 連結
  sort(A.begin(), A.end());

  cout << A[M - 1] << endl;
}