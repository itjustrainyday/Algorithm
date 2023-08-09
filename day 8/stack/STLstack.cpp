/*STL Stack을 사용하면, 로직에 오류가 없다는 것을
알 수 있다.
스택이 empty = 1 일때 top이나 pop를 쓰지 않도록 한다.*/
#include <bits/stdc++.h>
using namespace std;

int main(void) {
  stack<int> S;
  S.push(10); // 10
  S.push(20); // 10 20
  S.push(30); // 10 20 30
  cout << S.size() << '\n'; // 3
  if(S.empty()) cout << "S is empty\n";
  else cout << "S is not empty\n"; // S is not empty
  S.pop(); // 10 20
  cout << S.top() << '\n'; // 20
  S.pop(); // 10
  cout << S.top() << '\n'; // 10
  S.pop(); // empty
  if(S.empty()) cout << "S is empty\n"; // S is empty
  cout << S.top() << '\n'; // runtime error 발생
}
