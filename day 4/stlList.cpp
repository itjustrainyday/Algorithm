#include <bits/stdc++.h>
using namespace std;
//c++ STL list : double Linked List 구현
int main(void) {
    list<int> L = { 1,2 }; // 1 2
    list<int>::iterator t = L.begin(); // t는 1을 가리키는 중
    L.push_front(10); // 10 1 2
    cout << *t << '\n'; // t가 가리키는 값 = 1을 출력
    L.push_back(5); // 10 1 2 5
    L.insert(t, 6); // t가 가리키는 곳 앞에 6을 삽입, 10 6 1 2 5
    t++; // t를 1칸 앞으로 전진, 현재 t가 가리키는 값은 2
    t = L.erase(t); // t가 가리키는 값을 제거, 그 다음 원소인 5의 위치를 반환
                    // 10 6 1 5, t가 가리키는 값은 5
    cout << *t << '\n'; // 5
    for (auto i : L) cout << i << ' '; //c++ 11이상에서 편하게 구현할 수 있는 순회
    cout << '\n';
    for (list<int>::iterator it = L.begin(); it != L.end(); it++) //c++ 11미만에서 불편하게 구현해야 할 순회
        cout << *it << ' ';
}
