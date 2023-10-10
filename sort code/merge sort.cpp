#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

void Merge(vector<int>& v, int st, int mid, int en) { // [st, en)
	vector<int> t(en - st);
	int i = st, j = mid, pos = 0;
	while (i < mid && j < en) {
		if (v[i] < v[j]) t[pos++] = v[i++];
		else t[pos++] = v[j++];
	}
	while (i < mid) t[pos++] = v[i++];
	while (j < en) t[pos++] = v[j++];
	for (int i = 0; i < en - st; i++) v[st + i] = t[i];
}

void MergeSort(vector<int>& v, int st, int en) { // [st, en)
	if (en - st < 2) return;
	const int mid = st + en >> 1;
	MergeSort(v, st, mid);
	MergeSort(v, mid, en);
	Merge(v, st, mid, en);
}

int main() {
	fastio;
	int n; cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++) cin >> v[i];
	MergeSort(v, 0, n);
	for (auto& i : v) cout << i << '\n';
}
