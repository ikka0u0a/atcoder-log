#include <bits/stdc++.h>
using namespace std;

int sum_range(int a,int b){
  if(a == b){
    return b;
  }
  return a + sum_range(a + 1, b);
}

int main() {
  int A, B;
  cin >> A >> B;
  cout << sum_range(A,B) << endl;
}