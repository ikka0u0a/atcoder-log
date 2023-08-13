#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  string S;
  cin >> N >> S;
  int tc = 0,ac = 0;
  char last;
  map<char, char> m;
  m['T'] = 'A';
  m['A'] = 'T';
  rep(i, N){
    if(S[i] == 'T'){
      tc++;
      last = 'T';
    }
    if(S[i] == 'A') {
      ac++;
      last = 'A';
    }
  }
  if(tc < ac) cout << 'A' << endl;
  if(tc > ac) cout << 'T' << endl;
  if(tc == ac) cout << m[last] << endl;
}