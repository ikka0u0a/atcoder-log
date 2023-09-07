#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N = 8;
  vector<string> S(N);
  string A = "";
  rep(i,N) cin >> S[i];
  rep(i,N) A += 'a' + i;
  rep(i,N) rep(j,S[i].size()) if(S[i][j] == '*') cout << A[j] + to_string(N - i) << endl;
}