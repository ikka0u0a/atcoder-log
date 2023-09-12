#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  for(int i = 2; i <= S.size(); i += 2){
    int s1 = i - 1 - 1;
    int s2 = i - 1;
    char c = S[s1];
    S[s1] = S[s2];
    S[s2] = c;
  }
  cout << S << endl;
}