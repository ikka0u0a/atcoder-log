#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int A, B, C;
  cin >> A >> B >> C;
  int m = min(A, B);
  m = min(m, C);
  int mx = max(A, B);
  mx = max(mx, C);
  cout << mx - m << endl;
}