#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  vector<string> v;
  v = {"ACE", "BDF", "CEG", "DFA", "EGB", "FAC", "GBD"};
  auto result = find(v.begin(), v.end(), S);
  if (result == v.end()) {
    cout << "No" << endl;
  } else {
    cout << "Yes" << endl;
  }
}