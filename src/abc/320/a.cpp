#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int A,B;
  cin >> A >> B;
  int a_ans = A;
  int b_ans = B;
  rep(i,(B - 1)) a_ans *= A;
  rep(i,(A - 1)) b_ans *= B;
  cout << a_ans + b_ans << endl;
}