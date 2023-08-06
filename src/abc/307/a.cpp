#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  int ans = 0;
  rep(i, N * 7){
    int m;
    cin >> m;
    ans += m;
    if((i + 1) % 7 == 0) {
      cout << ans << " ";
      ans = 0;
    }
  }cout << endl;
}