#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

vector<string> T = {
  "###.?????",
  "###.?????",
  "###.?????",
  "....?????",
  "?????????",
  "?????....",
  "?????.###",
  "?????.###",
  "?????.###",
};

bool check(vector<string> &v){
  rep(i,9)rep(j,9){
    if(T[i][j] == '?') continue;
    if(T[i][j] != v[i][j]) return false;
  }
  return true;
}

int main() {
  int N,M;
  cin >> N >> M;
  vector<string> S(N);
  rep(i, N){  
    cin >> S[i];
  }

  rep(si, N - 8)rep(sj, M - 8){
    vector<string> t(9);
    rep(i,9)rep(j,9) t[i] += S[si + i][sj + j];
    if(check(t)) cout << si + 1 << " " << sj + 1 << endl;
  }

}