#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

int check(vector<int> &a, int x) {
	for (int i = 0; i < a.size(); i++) {
		if (a[i] > x) return a[i];
	}

	return -1;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	freopen("D:/Sublime file/input.txt", "r", stdin);
	freopen("D:/Sublime file/output.txt", "w", stdout);

	int n; cin >> n;

	vector<int> a(n);
	for (int i = 0; i < n ; i++) cin >> a[i];

	int x; cin >> x;

	cout << check(a, x);

	return 0;
}