#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

bool isTak(int t, int y,vector<string> &v){
  bool hasCord = true;
  string s0 = v[t];
  string s1 = v[t + 1];
  string s2 = v[t + 2];
  string s3 = v[t + 3];
  string s5 = v[t + 5];
  string s6 = v[t + 6];
  string s7 = v[t + 7];
  string s8 = v[t + 8];

  if(s0.at(y) != '#' || s0.at(y + 1) != '#' || s0.at(y + 2) != '#') hasCord = false;
  if(s1.at(y) != '#' || s1.at(y + 1) != '#' || s1.at(y + 2) != '#') hasCord = false;
  if(s2.at(y) != '#' || s2.at(y + 1) != '#' || s2.at(y + 2) != '#') hasCord = false;

  if(s6.at(y + 6) != '#' || s6.at(y + 7) != '#' || s6.at(y + 8) != '#') hasCord = false;
  if(s7.at(y + 6) != '#' || s7.at(y + 7) != '#' || s7.at(y + 8) != '#') hasCord = false;
  if(s8.at(y + 6) != '#' || s8.at(y + 7) != '#' || s8.at(y + 8) != '#') hasCord = false;

  if(s0.at(y + 3) != '.' || s1.at(y + 3) != '.' || s2.at(y + 3) != '.' || s3.at(y + 3) != '.') hasCord = false;
  if(s3.at(y) != '.' || s3.at(y + 1) != '.' || s3.at(y + 2) != '.') hasCord = false;
  if(s5.at(y + 5) != '.' || s5.at(y + 6) != '.' || s5.at(y + 7) != '.' || s5.at(y + 8) != '.') hasCord = false;
  if(s6.at(y + 5) != '.' || s7.at(y + 5) != '.' || s8.at(y + 5) != '.') hasCord = false;

  return hasCord;
} 

int main() {
  int N,M;
  cin >> N >> M;
  vector<string> S(N);
  //vector<vector<string>> S(N, vector<string>(M));
  rep(i, N){  
    cin >> S[i];
  }

  rep(i, N){
    rep(j, M){
      int hasCord = false;
      if((j + 8) < M && (i + 8) < N) hasCord = isTak(i,j,S);
      if(hasCord) cout << i + 1 << " " << j + 1 << endl;
    }
  }
}