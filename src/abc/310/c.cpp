#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

string rev(string s){
  reverse(s.begin(),s.end());
  return s;
}

int main() {
  int N;
  cin >> N;
  set<string> st;
  rep (i,N){
    string s;
    cin >> s;
    if(st.count(s)) continue;
    if(st.count(rev(s))) continue;
    st.insert(s);
  }
  cout << st.size() << endl;
}