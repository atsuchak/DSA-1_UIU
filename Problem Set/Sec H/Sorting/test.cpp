#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	freopen("D:/Sublime file/input.txt", "r", stdin);
	freopen("D:/Sublime file/output.txt", "w", stdout);

	int n; cin >> n;

	vector<pair<int, int>> a(n);
	for (int i = 0; i < n; i++) cin >> a[i].first >> a[i].second;

	sort(a.begin(), a.end());

	bool chk = 1;

	for (int i = 0; i < n - 1; i++) {
		if (a[i + 1].first < a[i].second) chk = 0;
		else chk = 1;
	}

	if (chk) cout << "True" << endl;
	else cout << "False" << endl;

	return 0;
}