#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  string S;
  cin >> N >> S;

  int a = 0;
  rep(i, N) if(S[i] == 'A') a++;
  int t = N - a;

  if(t < a) cout << 'A' << endl;
  else if(t > a) cout << 'T' << endl;
  else cout << char('T' + 'A' - S.back()) << endl;
}