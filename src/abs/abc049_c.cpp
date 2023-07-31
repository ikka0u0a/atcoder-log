#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  string S;
  vector<string> T = {"dream", "dreamer", "erase", "eraser" };

  cin >> S;
  reverse(S.begin(),S.end());

  rep(i,T.size()) reverse(T[i].begin(),T[i].end());
  
  bool exists = true;
  for(int i = 0; i < S.size();){
    bool divided = false;
    rep(j,T.size()){
      if(S.substr(i, T[j].size()) == T[j]){
        divided = true;
        i += T[j].size();
      }
    }
    if(!divided){
        exists = false;
        break;
    }
  }
  if(exists) cout << "YES" << endl;
  else cout << "NO" << endl;
}