#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
//512mb = 1.2억개의 int 
//실수 자료형 dobule, float에서의 기억해야 할 3가지 특징
//실수 자료형의 사칙연산은 오차가 발생할수 밖에 없다.
//float보단 double을 많이 씀, double은 long long에 못담음
//실수 자료형은 비교 연산자를 쓰지 말자
int fun1(int num);
int fun2(int arr[], int n);
int fun3(int num);
int fun4(int num);
int main() {
	fastio;
	int n;
	cin >> n;
	int resume = fun1(n);
	int arr[] = { 1,52,48 };
	for (int i = 0; i < 3; ++i) {
		int sum = fun2(arr[i], i);//?
	}
	int mul = fun3(n);
	int mul2 = fun4(n);
	cout << resume << '\n';
	return 0;
}
int fun1(int n) {
	int resume = 0;
	for (int i = 1; i <= n; ++i) {
		if (i % 3 == 0 || i % 5 == 0) resume += i;
	}
	return resume;
}
int fun2(int arr[], int n) {
	int sum = 0;
	for (int i = 0; i < n; ++i) {
		sum += arr[i];
	}
	if (sum == 100) return 1;
	else return 0;
}
int fun3(int n) {
	for (int i = 1; i * i <= n; ++i) {
		if (i*i == n) return 1;
	}
	return 0;
} 
int fun4(int n) {
	int val = 1;
	while (2 * val <= n) val *= 2;
	return val;
}
