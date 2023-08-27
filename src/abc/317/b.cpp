#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  rep(i,N) cin >> A[i];
  sort(A.begin(),A.end());
  rep(i,N - 1) {
    if(A[i] + 1 != A[i + 1]) {
      cout << A[i] + 1 << endl;
      break;
    }
  }
}