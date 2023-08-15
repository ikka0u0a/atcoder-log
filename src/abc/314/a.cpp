#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
string PiDec = "1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";

int main() {
  int N;
  cin >> N;
  cout << "3.";
  rep(i, N) cout << PiDec[i];
  cout << endl;
}