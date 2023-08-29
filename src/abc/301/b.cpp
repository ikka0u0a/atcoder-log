#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  rep(i,N) cin >> A[i];
  int start = A[0];
  for(int i = 1; i < N; i++){
    cout << start << " ";
    if(start + 1 == A[i] || start - 1 == A[i]);
    else if(start < A[i]){
      for(int j = start + 1; j < A[i]; j++){
        cout << j << " ";
      }
    }else if(start > A[i]){
      for(int j = start - 1; j > A[i]; j--){
        cout << j << " ";
      }
    }
    start = A[i];
  }
  cout << A[N - 1] << endl;
}