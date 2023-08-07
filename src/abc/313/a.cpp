#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  int P1;
  int M = N - 1;
  vector<int> V(M);
  int ans = 0;
  cin >> P1;
  if(N != 1){
    rep(i,M) cin >> V[i];
    sort(V.begin(),V.end());
    reverse(V.begin(),V.end());
    if(P1 <= V[0]) ans = V[0] + 1 - P1;
    if(P1 > V[0]) ans = 0;
  }
  cout << ans << endl;
}