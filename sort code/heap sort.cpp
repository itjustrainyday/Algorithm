#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

void MakeHeap(vector<int>& v) { // O(n)
	const int n = v.size();
	for (int i = n >> 1; i >= 0; i--) {
		for (int p = i, c = i << 1 | 1; c < n;) {
			if (c + 1 < n && v[c] < v[c + 1]) c++;
			if (v[p] < v[c]) swap(v[p], v[c]), p = c, c = c << 1 | 1;
			else break;
		}
	}
}

void HeapSort(vector<int>& v) { // O(nlogn)
	const int n = v.size(); MakeHeap(v);
	for (int i = n - 1; i; i--) {
		swap(v[0], v[i]);
		for (int p = 0, c = 1; c < i;) {
			if (c + 1 < i && v[c] < v[c + 1]) c++;
			if (v[p] < v[c]) swap(v[p], v[c]), p = c, c = c << 1 | 1;
			else break;
		}
	}
}

int main() {
	fastio;
	int n; cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++) cin >> v[i];
	HeapSort(v);
	for (auto& i : v) cout << i << '\n';
}
