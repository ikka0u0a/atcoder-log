#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  vector<vector<int>> V(N);
  rep(i, N){
    int M;
    cin >> M;
    rep(j, M){
      int A;
      cin >> A;
      V[i].push_back(A);
    }
  }
  int X;
  cin >> X;
  int min_size = 37;
  vector<int> B;
  rep(i, N){
    rep(j, V[i].size()){
      if(V[i][j] == X) {
        int k = V[i].size();
        min_size = min(min_size,k);
        B.push_back(i);
      }
    }
  }
  vector<int> B2;
  rep(i, B.size()){
    if(V[B[i]].size() == min_size){
      B2.push_back(B[i]);
    }
  }
  cout << B2.size() << endl;
  rep(i,B2.size()){
    cout << B2[i] + 1 << " ";
  }
  cout << endl;
}