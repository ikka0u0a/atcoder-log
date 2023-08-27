#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, H, X;
  cin >> N >> H >> X;
  vector<pair<int,int>> P(N);
  rep(i,N) {
    cin >> P[i].first;
    P[i].second = i + 1;
  }
  sort(P.begin(),P.end());
  rep(i, N) {
    if(P[i].first + H >= X) {
      cout << P[i].second << endl;
      break;
    }
  }
}