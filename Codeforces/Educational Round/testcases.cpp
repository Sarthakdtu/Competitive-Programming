#include <bits/stdc++.h>

#define forn(i, n) for (int i = 0; i < int(n); i++)

using namespace std;


int main() {
	int n, k;
	scanf("%d%d", &n, &k);
	vector<int> a(n);
	forn(i, n) scanf("%d", &a[i]);
	vector<int> c(k + 1);
	forn(i, k) scanf("%d", &c[i + 1]);
	
	sort(a.begin(), a.end(), greater<int>());
	int ans = 0;
	for (int i = k, g = 0; i >= 1; --i){
		while (g < n && a[g] == i) ++g;
		ans = max(ans, (g + c[i] - 1) / c[i]);
	}
	vector<vector<int>> res(ans);
	forn(i, n) res[i % ans].push_back(a[i]);
	
	printf("%d\n", ans);
	forn(i, ans){
		printf("%d", int(res[i].size()));
		for (auto it : res[i])
			printf(" %d", it);
		puts("");
	}
	return 0;
}