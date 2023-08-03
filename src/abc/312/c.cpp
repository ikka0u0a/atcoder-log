#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(N),B(M);
  rep(i,N) cin >> A[i];
  rep(i,M) cin >> B[i];
  sort(A.begin(),A.end());
  sort(B.begin(),B.end());
  int x = 0;
  int seller = 0;
  int buyer = B.size();
  int indexA=0;
  int indexB=0;
  while(buyer > 0){
    if(x > B[indexB]){
      int oldIndex = indexB;
      indexB++;
      buyer--;
      while(indexB < B.size()){
        if(B[indexB] == B[oldIndex]){
          oldIndex = indexB;
          indexB++;
          buyer--; 
        }else{
          break;
        }
      }
    }
    if(x >= A[indexA]){
      int oldIndex = indexA;
      indexA++;
      seller++;
      while(indexA < A.size()){
        if(A[indexA] == A[oldIndex]){
          oldIndex = indexA;
          indexA++;
          seller++;
        }else{
          break;
        }
      }
    }
    if(seller >= buyer) break;
    x++;
  }
  cout << x << endl;
}