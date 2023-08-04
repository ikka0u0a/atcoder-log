#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  string S;
  cin >> S;
  bool isA = false,isB = false,isC = false;
  rep(i, N){
    if(S[i] == 'A') isA = true;
    if(S[i] == 'B') isB = true;
    if(S[i] == 'C') isC = true;
    if(isA && isB && isC){
      cout << i + 1 << endl;
      break;
    }
  }
}