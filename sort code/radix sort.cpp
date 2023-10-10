#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

constexpr int MSB = 1 << 31;

void RadixSort(vector<int>& v) {
	const unsigned int SZ = 8;
    const unsigned int mask = (1 << SZ) - 1;
	static queue<int> Q[1 << SZ];
    for (int k = 0; k < 4; k++) {
	    for (const auto& i : v) Q[(i ^ MSB) >> k * SZ & mask].push(i); v.clear();
	    for (auto& Q : Q) while (Q.size()) v.push_back(Q.front()), Q.pop();
    }
}

int main() {
	fastio;
	int n; cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++) cin >> v[i];
	RadixSort(v);
	for (auto& i : v) cout << i << '\n';
}
