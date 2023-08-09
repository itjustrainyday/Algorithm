/*배열로 구현한 스택*/
#include <bits/stdc++.h>
using namespace std;

const int MX = 1000005;
int dat[MX];
int pos = 0;

void push(int x) {
    dat[pos++] = x;
}

void pop() {
    pos--; //어차피 pos값을 줄인다음에, 다른 값이 push되면 덮어쓸것이다.
}

int top() {
    return dat[pos-1];
}

void test() {
    push(5); push(4); push(3);
    cout << top() << '\n'; // 3
    pop(); pop();
    cout << top() << '\n'; // 5
    push(10); push(12);
    cout << top() << '\n'; // 12
    pop();
    cout << top() << '\n'; // 10
}

int main(void) {
    test();
}
