#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N,T;
  cin >> N >> T;
  vector<pair<int,int>> p(N);
  rep(i,N) cin >> p[i].first;
  rep(i,N) cin >> p[i].second;
  int max = 0;
  int pNum = 0;
  rep(i, N){
    if(p[i].first == T && p[i].second > max) {
      pNum = i + 1;
      max = p[i].second;
    }
  }
  if(pNum == 0){
    max = p[0].second;
    T = p[0].first;
    pNum = 1;
    rep(i, N){
      if(p[i].first == T && p[i].second > max) {
        pNum = i + 1;
        max = p[i].second;
      }
    }
  }
  cout << pNum << endl;
}