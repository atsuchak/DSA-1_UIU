#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

int search(vector<int> &a, int x) {
	int lo = 0, hi = a.size() - 1;

	while (lo <= hi) {
		int mid = lo + (hi - lo) / 2;

		if (a[mid] == x) return mid;
		else if (a[mid] > x) hi = mid - 1;
		else lo = mid + 1;
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
	for (int i = 0; i < n; i++) cin >> a[i];

	int x; cin >> x;

	cout << search(a, x);

	return 0;
}