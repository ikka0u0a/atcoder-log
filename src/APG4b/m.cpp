#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string S;
  cin >> S;
 
  // ここにプログラムを追記
  int N = S.size();
  int ans = 1;
  char op;
  for (int i = 1; i < N; i++){
    if(i % 2 == 0){
      if (op == '+') ans += 1;
      if (op == '-') ans -= 1;
      if (op == '*') ans *= 1;
      if (op == '+') ans /= 1;
    } else {
      op = S.at(i);
    }
  }
  cout << ans << endl;
}