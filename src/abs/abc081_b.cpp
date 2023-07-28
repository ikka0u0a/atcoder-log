#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  bool isEven = true;
  int count = 1;
  rep(i,N){
    cin >> A.at(i);
    if(A.at(i) % 2 != 0) {
      isEven = false;
      count = 0;
    }
  }
  while(isEven){
    rep(i,N){
      A.at(i) /= 2;
      if(A.at(i) % 2 != 0) {
        isEven = false;
        goto OUT;
      }
    }
    count++;
  }
  OUT:
  cout << count << endl;
}