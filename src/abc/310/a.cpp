#include <bits/stdc++.h>
using namespace std;

int main() {
  int N; // 品数
  int P; // ドリンク定価
  int Q; // 割引後ドリンク代
  cin >> N >> P >> Q;
  vector<int> D(N);// 料理代
  int min;
  for (int i = 0; i < N; i++) {
    cin >> D.at(i);
  }
  min = D.at(0);
  for (int i = 0; i < N; i++) {
    if(D.at(i) < min) {
      min = D.at(i);
    }
  }
  if (min + Q < P) {
    cout << min + Q << endl;
  } else {
    cout << P << endl;
  }
}