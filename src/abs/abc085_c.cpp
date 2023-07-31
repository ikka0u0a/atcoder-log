#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N,Y;
  cin >> N >> Y;

  for(int i = 0; i <= N; i++){ // 10000円札の枚数を 0 ~ N の範囲で調べる
    for(int j = 0; j <= N - i; j++){ // 10000円札の枚数を 0 ~ N - i の範囲で調べる
      int k = N - (i + j);
      int total = 10000 * i + 5000 * j + 1000 * k;
      if(total == Y){
        cout << i << " " << j << " " << k << endl;
        return 0;
      }
    }
  }
  cout << -1 << " " << -1 << " " << -1 << endl;
  return 0;
}