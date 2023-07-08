#include <bits/stdc++.h>
using namespace std;
int main(){
  int N;
  cin >> N;
  vector<vector<int>> data(N,vector<int>(N));
  // 入力
  for(int i = 0; i < N; i++){
    string s;
    cin >> s;
    for(int j = 0; j < N; j++){
      data[i][j] = s[j] - '0';
    }
  }
  vector<vector<int>> ans(N,vector<int>(N));
  int E = N - 1;
  //処理
  for(int i = 0; i < N; i++) {
    for(int j = 0; j < N; j++){
      if (j == 0 && i != E) {
        ans[i][j] = data[i+1][j];
      }
      else if (i == 0){
        ans[i][j] = data[i][j-1];
      }
      else if (i != E && j == 0){
        ans[i][j] = data[i+1][j];
      }
      else if (i != E && j == E){
        ans[i][j] = data[i-1][j];
      }
      else if (i == E && j != E){
        ans[i][j] = data[i][j+1];
      }
      else if (i == E && j == E){
        ans[i][j] = data[i-1][j];
      }
      else {
        ans[i][j] = data[i][j];
      }
    }
  }  

  //出力
  for(int i = 0; i < N; i++){
    for(int j = 0; j < N; j++){
      cout << ans[i][j];
    }
    cout << endl;
  }  
}