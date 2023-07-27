#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N,M;
  cin >> N >> M;
  vector<int> A(N);
  vector<int> B(M);

  rep(i,N) cin >> A.at(i);
  rep(i,M) cin >> B.at(i);

  sort(A.begin(), A.end());
  sort(B.begin(), B.end());

  int x = 0;
  int y = 0;
  int ans = abs(A.at(0) - B.at(0)); //abs(x)引数xの絶対値を返す
  while ((x < N) && (y < M)) {
		ans = min(ans, abs(A.at(x) - B.at(y)));
		if (A.at(x) > B.at(y)) y++;
		else x++;
	}
  cout << ans << endl;
}