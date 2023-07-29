#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int A,B,C,X;
  cin >> A >> B >> C >> X;
  int ans = 0;
  rep(a, A + 1){
    rep(b, B + 1){
      rep(c, C + 1){
        int total = 500 * a + 100 * b + 50 * c;
        if(total == X) ans++;
      }
    }
  }
  cout << ans << endl;
}