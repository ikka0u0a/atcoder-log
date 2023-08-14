#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N,A,B;
  cin >> N >> A >> B;
  rep(i, N){
    int c;
    cin >> c;
    if(c == (A + B)) cout << i + 1 << endl;
  }
}