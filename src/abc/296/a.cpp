#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  string S;
  cin >> N >> S;
  char old;
  rep(i,N){
    if(old == S[i]) {
      cout << "No" << endl;
      return 0;
    }
    old = S[i];
  }
  cout << "Yes" << endl;
  return 0;
}