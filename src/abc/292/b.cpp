#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N,Q;
  cin >> N >> Q;
  vector<int> P(N,0);
  vector<vector<int>> E(Q, vector<int>(2));
  rep(i,Q)rep(j,2) cin >> E[i][j];
  rep(i,Q) {
    int event = E[i][0];
    int player = E[i][1] - 1;
    if(event == 1) P[player]++;
    if(event == 2) P[player] += 2;
    if(event == 3)
      if(P[player] >= 2) cout << "Yes" << endl;
      else cout << "No" << endl;
  }
}