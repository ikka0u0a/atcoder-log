#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  bool fill = true;
  int oldS=0;
  rep(i, 8){
    int s;
    cin >> s;
    if (s < oldS) fill = false;
    if (s < 100 || s > 675) fill = false;
    if (s % 25 != 0) fill = false;
    oldS = s;
  }
  if(fill) cout << "Yes" << endl;
  else cout << "No" << endl;
}