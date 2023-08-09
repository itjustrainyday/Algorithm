#include <bits/stdc++.h>
using namespace std;

const int MX = 1000005;
int dat[2 * MX + 1]; //덱에서는 양 쪽 모두 확장이 가능하기 때문에 양쪽으로 확장해야함 중간에 둬야함
int head = MX, tail = MX;

void push_front(int x) {
    dat[--head] = x;
}

void push_back(int x) {
    dat[tail++] = x;
}

void pop_front() {
    head++; //왼쪽에서 오른쪽으로 한 칸 이동
}

void pop_back() {
    tail--; //오른쪽에서 왼쪽으로 한 칸 이동
}

int front() {
    return dat[head];
}

int back() {
    return dat[tail-1]; 
}

void test() {
    push_back(30); // 30
    cout << front() << '\n'; // 30
    cout << back() << '\n'; // 30
    push_front(25); // 25 30
    push_back(12); // 25 30 12
    cout << back() << '\n'; // 12
    push_back(62); // 25 30 12 62
    pop_front(); // 30 12 62
    cout << front() << '\n'; // 30
    pop_front(); // 12 62
    cout << back() << '\n'; // 62
}

int main(void) {
    test();
}
