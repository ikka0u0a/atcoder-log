#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  int M = N % 5;
  if(M < 3) cout << N - M << endl;
  else cout << N - M + 5 << endl;
}