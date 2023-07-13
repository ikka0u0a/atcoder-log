#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int A, B, C;
  cin >> A >> B >> C;
 
  int maximum = max(max(A, B), C); // 最大値を計算
  int minimum = min(min(A, B), C); // 最小値を計算
 
  cout << maximum - minimum << endl;
}