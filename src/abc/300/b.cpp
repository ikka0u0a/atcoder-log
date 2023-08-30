#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int H,W;
  cin >> H >> W;
  vector<string> A(H),B(H);
  rep(i, H) cin >> A[i];
  rep(i, H) cin >> B[i];
  for (int s = 0; s < H; s++) {
    for (int t = 0; t < W; t++) {
      bool can = true;
      for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
          if (A[(i - s + H) % H][(j - t + W) % W] != B[i][j]) can = false;
        }
      }
      if (can) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;
  return 0;
}