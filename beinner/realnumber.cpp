#include <bits/stdc++.h> // 별도의 헤더 파일 추가 필요 (모든 헤더 파일을 포함하고 있어서 사용 유이
#define fastio cin.tie(0) -> sync_with_stdio(0)//cin,cout 성능 향상
using namespace std; //기초 틀 

void Print() {
	cout << 0.000123456789 << '\n';
	cout << 0.123456789123 << '\n';
	cout << 123.456789123 << '\n';
	cout << 123456.789123 << '\n';
	cout << 123456789.123 << '\n';
	cout << '\n';
}
int main() {
	fastio;
	cout << fixed; // 뒤에 소숫점들을 6자리로 고정하는 역할?
	Print();
	cout << setprecision(10); //뒤에 소숫점 갯수를 조정해주는 역할
	Print();
}
