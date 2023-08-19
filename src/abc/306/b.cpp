#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N = 64;
  unsigned long long ans = 0;
  rep(i,N){
    int a;
    cin >> a;
    unsigned long long c = (a * pow(2,i));
    ans += c;
  }
  cout << ans << endl;
}