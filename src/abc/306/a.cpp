#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  string S;
  cin >> S;
  string S2;
  rep(i, N){
    S2 = S2 + S.at(i) + S.at(i);
  }
  cout << S2 << endl;
}