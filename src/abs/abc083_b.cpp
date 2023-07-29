#include <bits/stdc++.h>
using namespace std;

int digitSum(int n){
  int sum = 0;
  while(n > 0){
    sum += n % 10;
    n /= 10;
  }
  return sum;
}

int main() {
  int N, A, B;
  cin >> N >> A >> B;
  int ans = 0;
  for (int i = 1; i <= N; i++){
    int sum = digitSum(i);
    if(sum >= A && sum <= B) ans += i;
  }
  cout << ans << endl;
}