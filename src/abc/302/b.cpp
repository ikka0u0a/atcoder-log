#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

void findSnuke(vector<string> &S){
  string FS = "snuke";
  rep(i, S.size()){
    rep(j,S[i].size()){
      if(S[i][j] == FS[0]){
        int FSSize = FS.size() - 1;
        int ue = i - FSSize;
        int hidari = j - FSSize;
        int migi = j + FSSize;
        int sita = i + FSSize;
        //左
        if(hidari >= 0) {
          string c = "";
          rep(k, FS.size()) {
            c += S[i][j - k];
          }
          if(c == FS) {
            rep(k, FS.size()) {
              cout << i + 1 << " " << j - k + 1 << endl;
            }
          }
        }
        //右
        if(migi < S[i].size()){
          string c = "";
          rep(k, FS.size()) {
            c += S[i][j + k];
          }
          if(c == FS) {
            rep(k, FS.size()) {
              cout << i + 1 << " " << j + k + 1 << endl;
            }
          }
        }
        //上
        if(ue >= 0){
          string c = "";
          rep(k, FS.size()) {
            c += S[i - k][j];
          }
          if(c == FS) {
            rep(k, FS.size()) {
              cout << i - k + 1 << " " << j + 1 << endl;
            }
          }
        }
        //下
        if(sita < S.size()){
          string c = "";
          rep(k, FS.size()) {
            c += S[i + k][j];
          }
          if(c == FS) {
            rep(k, FS.size()) {
              cout << i + k + 1 << " " << j + 1 << endl;
            }
          }
        }
        //斜め左上
        if(hidari >= 0 && ue >= 0){
          string c = "";
          rep(k, FS.size()) {
            c += S[i - k][j - k];
          }
          if(c == FS) {
            rep(k, FS.size()) {
              cout << i - k + 1 << " " << j - k + 1 << endl;
            }
          }
        }
        //斜め左下
        if(hidari >= 0 && sita < S.size()){
          string c = "";
          rep(k, FS.size()) {
            c += S[i + k][j - k];
          }
          if(c == FS) {
            rep(k, FS.size()) {
              cout << i + k + 1 << " " << j - k + 1 << endl;
            }
          }
        }
        //斜め右上
        if(migi < S[i].size() && ue >= 0){
          string c = "";
          rep(k, FS.size()) {
            c += S[i - k][j + k];
          }
          if(c == FS) {
            rep(k, FS.size()) {
              cout << i - k + 1 << " " << j + k + 1 << endl;
            }
          }
        }
        //斜め右下
        if(migi < S[i].size() && sita < S.size()){
          string c = "";
          rep(k, FS.size()) {
            c += S[i + k][j + k];
          }
          if(c == FS) {
            rep(k, FS.size()) {
              cout << i + k + 1 << " " << j + k + 1 << endl;
            }
          }
        }
      }
    }
  }
}

int main() {
  int H,W;
  cin >> H >> W;
  vector<string> S(H);
  rep(i, H) cin >> S[i];
  findSnuke(S);
}