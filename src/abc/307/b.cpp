#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

bool checkPalindrome(string s){
  bool isPalindrome = true;
  int M = s.size();
  rep(i, M) if(s[i] != s[M - 1 - i]) isPalindrome = false;
  return isPalindrome;
}


int main() {
  int N;
  cin >> N;
  vector<string> S(N);
  rep(i, N) cin >> S[i];
  bool exist = false;
  rep(i, N){
    rep(j, N){
      if(i == j) continue;
      string s;
      s = S[i] + S[j];
      if(checkPalindrome(s)) exist = true;
    }
  }
  if(exist) cout << "Yes" << endl;
  else cout << "No" << endl;
}