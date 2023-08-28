#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int M;
  cin >> M;
  vector<int> D(M);
  int dSum = 0;
  int middleD = 0;
  int mAns = 0;
  int dAns = 0;
  rep(i,M){
    cin >> D[i];
    dSum += D[i];
  }
  middleD = (dSum + 1) / 2;
  dSum = 0;
  rep(i,M){
    dSum += D[i];
    if(dSum >= middleD) {
      mAns = i + 1;
      dAns = D[i] - (dSum - middleD);
      break;
    }
  }
  cout << mAns << " " << dAns << endl;
}