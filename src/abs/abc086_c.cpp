#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  vector<int> T(N + 1),X(N + 1),Y(N + 1);
  T[0] = X[0] = Y[0] = 0;
  rep(i, N) cin >> T[i + 1] >> X[i + 1] >> Y[i + 1];

  bool can = true;
  rep(i, N){
    int dt = T[i + 1] - T[i];
    int dist = abs(X[i + 1] - X[i]) + abs(Y[i + 1] - Y[i]);
    if(dt < dist || dt % 2 != dist % 2) can =false;
  }
  if(can) cout << "Yes" << endl;
  else cout << "No" << endl;
}