#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N,M;
  cin >> N >> M;
  vector<int> A(N);
  vector<int> B(M);

  rep(i,N){
    cin >> A.at(i);
  }
  rep(i,M){
    cin >> B.at(i);
  }
  int ans = -1;
  rep(i,N){
    rep(j,M){
      int r = 0;
      if(A.at(i) >= B.at(j)){
        r = A.at(i) - B.at(j);
      } else {
        r = B.at(j) - A.at(i);
      }
      if(ans == -1){
         ans = r;
      }else if(ans > r){
        ans = r;
      }
    }
  }
  cout << ans << endl;
}