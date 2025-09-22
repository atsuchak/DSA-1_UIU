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

	vector<int> a(n);
	for (int i = 0; i < n; i++) cin >> a[i];

	vector<int> res;

	for (int it : a) if (it == 0) res.push_back(it);
	for (int it : a) if (it == 1) res.push_back(it);
	for (int it : a) if (it == 2) res.push_back(it);

	for (int it : res) cout << it << " ";

	return 0;
}