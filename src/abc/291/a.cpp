#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  string S;
  cin >> S;
  rep(i, S.size()){
    if(S[i] < 'a'){
      cout << i + 1 << endl;
      return 0;
    }
  }
  return 0;
}