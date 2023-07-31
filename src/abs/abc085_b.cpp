#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  vector<int> d(N);
  rep(i, N){
    cin >> d.at(i);
  }
  
  sort(d.begin(),d.end());

  int ans = 1;
  int mochi = d.at(0);
  for (int i = 1; i < N; i++){
    if(mochi < d.at(i)){
      ans++;
      mochi = d.at(i);
    }
  }

  cout << ans << endl;

}