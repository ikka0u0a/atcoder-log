#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// void disp (vector<vector<int>> &V){
//   int size = V.size();
//   rep(i, size) {
//     rep(j, size){
//       cout << V[i][j] << " ";
//     }
//     cout << endl;
//   }
// }

void rotate (vector<vector<int>> &V){
  int size = V.size();
  vector<vector<int>> CP = V;
  rep(i,size){
    rep(j,size){
      V[i][j] = CP[size - 1 - j][i];
    }
  }
}

bool isOverlap (vector<vector<int>> &V,vector<vector<int>> &T){
  bool isLap = true;
  int size = V.size();
  rep(i, size) rep(j, size) if(V[i][j] == 1 && T[i][j] == 0) isLap = false;
  return isLap;
}

int main() {
  int N;
  cin >> N;
  vector<vector<int>> A(N,vector<int>(N));
  vector<vector<int>> B(N,vector<int>(N));
  rep(i, N) rep(j, N) cin >> A[i][j];
  rep(i, N) rep(j, N) cin >> B[i][j];
  rep(i,4) {
		if (isOverlap(A,B)) {
			cout << "Yes" << endl;
			return 0;
		}
		rotate(A);
	}
	cout << "No" << endl;
  return 0;
}