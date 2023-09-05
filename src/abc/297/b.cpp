#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  string S;
  cin >> S;
  int x = -1,y = -1;
  string A = "";
  rep(i, S.size()){
    if(S[i] == 'B' && x == -1) x = i + 1;
    if(S[i] == 'B' && x != -1) y = i + 1;
    if(S[i] == 'R' || S[i] == 'K') A += S[i];
  }
  if(x % 2 != y % 2 && A == "RKR") cout << "Yes" << endl;
  else cout << "No" << endl;
}