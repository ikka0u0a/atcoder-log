#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,M,P;
  cin >> N >> M >> P;
  int fullMoon = M;
  int ans = 0;
  for(int i = 1; i <= N; i++){
    if(i == fullMoon){
      ans++;
      fullMoon += P;
    }
  }
  cout << ans << endl;
}