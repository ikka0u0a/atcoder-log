#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int H,W;
  cin >> H >> W;
  vector<string> A(H);
  rep(i,H) rep(j,W){
    int n;
    cin >> n;
    if(n == 0) A[i] += '.';
    else A[i] += 'A' + (n - 1);
  }
  rep(i,H) cout << A[i] << endl;
}