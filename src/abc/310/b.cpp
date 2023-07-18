#include<bits/stdc++.h>
using namespace std;

int main(){
  int N,M;
  cin >> N >> M;
  vector<int> P(N);
  //func[i][j]:i番目の商品がj番目の機能を持つか(0-indexed) 初期値はfalse
  vector<vector<bool>> hasFunc(N, vector<bool>(M));
  for(int i = 0; i < N; i++){
    cin >> P.at(i);
    int c;
    cin >> c;
    for(int j = 0; j < c; j++){
        int f;
        cin >> f;
        f--; //0-indexedに直す
        hasFunc.at(i).at(f)=true;
    }
  }

  bool hasPair=false; //条件をすべて満たす(i,j)のペアが存在するか
  for(int i = 0; i < N; i++){
    for(int j = 0; j < N; j++){
      bool isCheap = false; //j番目の製品がi番目の製品と同じ値段または安いか
      bool hasAllFunc = true; //j番目の製品がi番目の製品が持つ機能をすべてもつかどうか
      bool hasManyFunc = false; //j番目の製品がi番目の製品にない機能を1つ以上もつかどうか
      if(P.at(i) >= P.at(j)) isCheap = true;
      for(int k = 0; k < M; k++){
        if(hasFunc.at(i).at(k) && !hasFunc.at(j).at(k)) hasAllFunc = false; //i番目の製品がもつ機能をj番目の製品が持っていなかったらダメ
        if(hasFunc.at(j).at(k) && !hasFunc.at(i).at(k)){
            hasManyFunc = true; //j番目の製品がi番目の製品にない機能をもっていたらOK
        }
      }
      if(P.at(i) > P.at(j)) hasManyFunc = true;
      if(isCheap && hasAllFunc && hasManyFunc) hasPair=true;
    }
  }

  if(hasPair == true) cout << "Yes" << endl;
  else cout << "No" << endl;
}
