#include <bits/stdc++.h>
using namespace std;
// a ~ bの総和を計算する (a ≦ b)という前提
int sum_range(int a, int b) {
  // ベースケース
  if (a == b) {
    return a;
  }
  // 再帰ステップ
  return sum_range(a, b - 1) + b;  // 「a~bの総和」=「a~(b-1)の総和」+ b
}

int main() {
  int A, B;
  cin >> A >> B;
  cout << sum_range(A,B) << endl;
}