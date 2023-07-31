#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  vector<int> a(N);
  rep(i,N){
    cin >> a.at(i);
  }
  sort(a.begin(),a.end(),greater<int>());
  
  int ans = 0;
  rep(i,N){
    if(i % 2 == 0) ans += a.at(i);
    else ans -= a.at(i);
  }

  cout << ans << endl;
}