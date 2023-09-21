#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  vector<int> X(5 * N);
  rep(i,5 * N) cin >> X[i];
  sort(X.begin(), X.end());
  double sum = 0;
  for (int i = N; i < 5 * N - N; i++) sum += X[i];
  cout << fixed << setprecision(15);
  cout << sum / (3 * N)<< endl;
}