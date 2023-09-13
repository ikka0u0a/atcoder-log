#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  rep(i,N) cin >> A[i];
  rep(i,N){
    if (A[i] == 0) continue;
    int index = A[i] - 1;
    A[index] = 0;
  }
  vector<int> X;
  rep(i,N){
    if (A[i] == 0) continue;
    else X.push_back(i + 1);
  }
  cout << X.size() << endl;
  rep(i,X.size()) cout << X[i] << " ";
  cout << endl;
}