#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  int masu = 100;
  vector<vector<int>> zahyou(masu, vector<int>(masu,0));
  vector<vector<int>> V(N, vector<int>(4));
  rep(i,N){
    cin >> V[i][0] >> V[i][1] >> V[i][2] >> V[i][3];
  }
  rep(i,N){
    for(int x = V[i][0]; x < V[i][1]; x++){
      for(int y = V[i][2]; y < V[i][3]; y++){
        zahyou[x][y] = 1;
      }
    }
  }
  int ans = 0;
  rep(x,masu) rep(y,masu) if(zahyou[x][y] == 1) ans++;
  cout << ans << endl;
}