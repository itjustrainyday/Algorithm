#include <bits/stdc++.h>
using namespace std;
int num[21];
//void reverse(int a, int b);
void reverse(int a, int b) {
    for (int i = 0; i < (b - a + 1) / 2; ++i) {
        swap(num[a + i], num[b - i]);
    }
} //for example
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    for (int i = 1; i <= 20; i++) num[i] = i;
    for (int i = 0; i < 10; ++i) {
        int a, b;
        cin >> a >> b;
        reverse(a, b);
    }
    for (int i = 1; i <= 20; i++) cout << num[i] << ' ';
}
//함수는 기왕이면 위에다가 써서 두번 언급하는 번거로움 자제시키기
/*
직접 만든 reverse 함수
*/
