#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  vector<string> T = {"and", "not", "that", "the", "you"};
  int N;
  cin >> N;
  vector<string> W(N);
  rep(i,N) cin >> W[i];
  bool ex = false;
  rep(i,N) rep(j,T.size()) if(W[i] == T[j]) ex = true;
  if(ex) cout << "Yes" << endl;
  else cout << "No" << endl;
}