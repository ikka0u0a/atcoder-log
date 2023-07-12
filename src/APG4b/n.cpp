#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  int sum = 0;
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
    sum += A.at(i);
  }
  sum /= N;
  for (int i = 0; i < N; i++) {
    int ans = 0;
    ans = sum - A.at(i);
    if (ans < 0) ans *= - 1;
    cout << ans << endl;
  }
}