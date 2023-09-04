#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N,D;
  cin >> N >> D;
  int time = -1;
  int old = -1;
  rep(i,N) {
    int T;
    cin >> T;
    if(i != 0 && T - old <= D && time == -1) time = T;
    old = T;
  }
  cout << time << endl;
}