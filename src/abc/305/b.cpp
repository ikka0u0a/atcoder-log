#include <bits/stdc++.h>
using namespace std;

int main() {
  char p,q;
  vector<int> d = {3,1,4,1,5,9};
  cin >> p >> q;
  int start = min(p,q) - 'A';
  int end = max(p,q) - 'A';
  int ans = 0;
  for (int i = start; i < end; i++) ans += d[i];
  cout << ans << endl;
}