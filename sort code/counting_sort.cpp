#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

constexpr int bias = 1'000'000;

int main() {
	fastio;
	int n, cnt[2'000'001]{}; cin >> n;
    for (int i = 0, t; i < n; i++) cin >> t, cnt[t + bias]++;
    for (int i = 0; i <= 2'000'000; i++)
        while (cnt[i]--) cout << i - bias << '\n';
}
