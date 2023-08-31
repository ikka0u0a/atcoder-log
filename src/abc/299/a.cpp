#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  vector<int> S(N);
  string A = "";
  rep(i,N){
    char c;
    cin >> c;
    if(c == '|' || c == '*'){
      if(A == "|*|") continue;
      if(A == "" && c == '|') A += c;
      if(A == "|" && c == '*') A += c;
      if(A == "|*" && c == '|') A += c;
    }
  }
  if(A == "|*|") cout << "in" << endl;
  else cout << "out" << endl;
}