#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  bool isEqual = false;
  if(S == "ACE") isEqual = true;
  if(S == "BDF") isEqual = true;
  if(S == "CEG") isEqual = true;
  if(S == "DFA") isEqual = true;
  if(S == "EGB") isEqual = true;
  if(S == "FAC") isEqual = true;
  if(S == "GBD") isEqual = true;

  if(isEqual) cout << "Yes" << endl;
  else cout << "No" << endl;
}