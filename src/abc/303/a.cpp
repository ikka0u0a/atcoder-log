#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

bool isLike(char A,char B){
  if(A == B) return true;
  if(A == '0' && B == 'o') return true;
  if(A == 'o' && B == '0') return true;
  if(A == '1' && B == 'l') return true;
  if(A == 'l' && B == '1') return true;
  else return false;
}

int main() {
  int N;
  cin >> N;
  string S,T;
  cin >> S >> T;
  bool res = true;
  rep(i, N) if(!isLike(S[i],T[i])) res = false;
  if(res) cout << "Yes" << endl;
  else cout << "No" << endl;
}