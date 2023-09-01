#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  int good = 0;
  int bad = 0;
  rep(i,N){
    char c;
    cin >> c;
    if(c == 'o') good++;
    if(c == 'x') bad++;
  }
  if (good > 0 && bad == 0) cout << "Yes" << endl;
  else cout << "No" << endl;
}