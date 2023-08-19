#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ull = unsigned long long;

int main() {
  int N = 64;
  ull ans = 0;
  rep(i,N){
    ull a;
    cin >> a;
    ans += a * ull (pow(2,i));
  }
  cout << ans << endl;
}