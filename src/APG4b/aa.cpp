#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for(int i = 0; i < N; i++){
    cin >> A.at(i);
  }

  map<int,int> M;

  for(int key : A){
    if (M.count(key)) {
      // keyに対応する関係が存在する
      M.at(key)++;
    }
    else {
      // keyに対応する関係が存在しない
      M[key] = 1;
    }
  }

  int max_cnt = 0;  // 出現回数の最大値を保持
  int ans = -1;     // 出現回数が最大になる値を保持
  for (int key : A) {
    // 今見ているxの出現回数が、その時点の最大よりも大きければ更新
    if (max_cnt < M.at(key)) {
      max_cnt = M.at(key);
      ans = key;
    }
  }
 
  cout << ans << " " << max_cnt << endl;
}