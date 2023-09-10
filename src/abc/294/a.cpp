#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  rep(i,N) cin >> A[i];
  rep(i,N) if(A[i] % 2 == 0) cout << A[i] << " ";
  cout << endl;
}