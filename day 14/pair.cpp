#include <bits/stdc++.h>
using namespace std;

int main(void){
  pair<int,int> t1 = make_pair(10, 13);
  pair<int,int> t2 = {4, 6}; // C++11
  cout << t2.first << ' ' << t2.second << '\n'; // 4 6
  if(t2 < t1) cout << "t2 < t1"; // t2 < t1
}
/*
bfs에서 사용하게될 STL : utility 헤더에 있는 pair
pair에너는 알아서 대소 관가 되어 있다
*/
