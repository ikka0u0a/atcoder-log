#include <bits/stdc++.h>
using namespace std;

int main() {
  long long A,B;
  cin >> A >> B;
  long long ans = A / B;
  if(A % B != 0) ans++;
  cout << ans << endl;
}