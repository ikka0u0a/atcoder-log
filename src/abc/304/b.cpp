#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  int k = to_string(N).size();
  if(k <= 3) cout << N << endl;
  else if(k == 4) cout << N - (N % 10) << endl;
  else if(k == 5) cout << N - (N % 100) << endl;
  else if(k == 6) cout << N - (N % 1000) << endl;
  else if(k == 7) cout << N - (N % 10000) << endl;
  else if(k == 8) cout << N - (N % 100000) << endl;
  else if(k == 9) cout << N - (N % 1000000) << endl;
}