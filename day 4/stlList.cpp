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
/*
- push_back : 마지막 위치에 원소를 삽입. O(1)

- push_front : 시작 위치에 원소를 삽입. O(1)

- pop_back : 마지막 위치의 원소를 삭제. O(1)

- pop_front : 시작 위치의 원소를 삭제. O(1)

- insert : 매개변수로 받은 iterator 위치의 앞에 원소를 삽입. O(1)

- erase : 매개변수로 받은 iterator 위치의 원소를 삭제 후 원래 위치의 다음 원소의 iterator를 반환. O(1)

​

- size : list의 크기를 size_t 자료형으로 반환.

- empty : list가 비어있는지 여부를 bool 자료형으로 반환.

- resize : list의 크기를 변경.

- clear : list의 모든 원소를 삭제.

​

- begin : list의 첫 번째 원소를 가리키는 iterator를 반환.

- end : list의 마지막 원소의 다음 칸을 가리키는 iterator를 반환.

- rbegin : begin의 reverse_iterator 버전.

- rend : end의 reverse_iterator 버전.

- front : list의 첫 번째 원소를 reference로 반환. O(1)

- back : list의 마지막 원소를 reference로 반환. O(1)

​

- sort : list 내의 원소를 정렬. O(nlogn)
*/
​
