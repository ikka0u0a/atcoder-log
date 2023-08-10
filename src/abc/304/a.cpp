#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int findMinIndex(vector<pair<int,string>> &p){
  int min = p[0].first;
  int minIndex = 0;
  rep(i, p.size()){
    if(min > p[i].first){
      min = p[i].first;
      minIndex = i;
    }
  }
  return minIndex;
}

int main() {
  int N;
  cin >> N;
  vector<pair<int,string>> p(N);
  rep(i, N) cin >> p[i].second >> p[i].first;
  int minIndex = findMinIndex(p);
  rep(i,N){
    int index = minIndex + i;
    if(index >= N) index -= N;
    cout << p[index].second << endl;
  }

}