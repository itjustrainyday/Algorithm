#include <bits/stdc++.h>
using namespace std;

void insert(int idx, int num, int arr[], int& len) {//len에 참조자를 보내서 원본의 값이 바뀐다.
    //왼쪽 idx부터 옮기면 그 다음칸의 값이 사라져버리는 문제점이 생긴다.
    //인덱스의 문제로 구현에 대해 생각해 볼 수 있다.
    for (int i = len; i > idx; --i) {
        arr[i] = arr[i - 1];
    }
    arr[idx] = num;
    len++;
}

void erase(int idx, int arr[], int& len) {
    len--;
    for (int i = idx; i < len; ++i) {
        arr[i] = arr[i + 1];
    }
}

void printArr(int arr[], int& len) {
    for (int i = 0; i < len; i++) cout << arr[i] << ' ';
    cout << "\n\n";
}

void insert_test() {
    cout << "***** insert_test *****\n";
    int arr[10] = { 10, 20, 30 };
    int len = 3;
    insert(3, 40, arr, len); // 10 20 30 40
    printArr(arr, len);
    insert(1, 50, arr, len); // 10 50 20 30 40
    printArr(arr, len);
    insert(0, 15, arr, len); // 15 10 50 20 30 40
    printArr(arr, len);
}

void erase_test() {
    cout << "***** erase_test *****\n";
    int arr[10] = { 10, 50, 40, 30, 70, 20 };
    int len = 6;
    erase(4, arr, len); // 10 50 40 30 20
    printArr(arr, len);
    erase(1, arr, len); // 10 40 30 20
    printArr(arr, len);
    erase(3, arr, len); // 10 40 30
    printArr(arr, len);
}

int main(void) {
    insert_test();
    erase_test();
}

