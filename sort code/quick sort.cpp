#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

struct Random {
	mt19937 rd;
	Random() : rd((unsigned)chrono::steady_clock::now().time_since_epoch().count()) {}
	Random(int seed) : rd(seed) {}
	template<typename T = int> T GetInt(T l = 0, T r = 32767) {
		return uniform_int_distribution<T>(l, r)(rd);
	}
} Rand;

int GetPivot(const vector<int>& v, int st, int en) { // return [st, en)
	return Rand.GetInt(st, en - 1);
}

void QuickSort(vector<int>& v, int st, int en) { // [st, en)
	if (en - st < 2) return;
	int l = st + 1, r = st + 1;
	for (swap(v[st], v[GetPivot(v, st, en)]); r < en; r++) {
		if (v[r] <= v[st]) swap(v[l++], v[r]);
	}
	swap(v[st], v[l - 1]);
	QuickSort(v, st, l - 1), QuickSort(v, l, en);
}

int main() {
	fastio;
	int n; cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++) cin >> v[i];
	QuickSort(v, 0, n);
	for (auto& i : v) cout << i << '\n';
}
