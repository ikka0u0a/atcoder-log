#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N, A;
  cin >> N >> A;
  int B;
  int E = 0;
  string op;
  // ここにプログラムを追記
  for(int i = 0; i < N; i++){
    cin >> op >> B;

    if (op == "+"){
      A += B;
    } else if (op == "-"){
      A -= B;
    } else if (op == "*"){
      A *= B;
    } else if (op == "/"){
      if (B == 0){
        cout << "error" << endl;
        E = N - (i + 1);
        break;
      }
      A /= B;
    }
    cout << i + 1 << ":" << A << endl;
  }
  for(int i = 0; i < E; i++){
    cin >> op >> B;
  }
}