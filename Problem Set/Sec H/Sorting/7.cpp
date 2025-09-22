#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

void sSort(vector<int> &a, int n) {
	for (int i = 0; i < n - 1; i++) {
		int smEl = i;
		for (int j = i + 1; j < n; j++) {
			if (a[j] < a[smEl]) smEl = j;
		}
		swap(a[i], a[smEl]);
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	freopen("D:/Sublime file/input.txt", "r", stdin);
	freopen("D:/Sublime file/output.txt", "w", stdout);

	int n; cin >> n;

	vector<int> a(n);
	for (int i = 0; i < n; i++) cin >> a[i];

	cout << "Before sort: ";
	for (int it : a) cout << it << " ";
	cout << endl;

	sSort(a, n);

	cout << "After sort: ";
	for (int it : a) cout << it << " ";
	cout << endl;

	int cnt = 0, init = 0;

	for (int i = 0; i < n; i++) {
		int x = a[init];

		for (int j = i + 1; j < n; j++) {
			if (a[j] == x) {
				a[j]++;
				cnt++;
			}
		}
		init++;
	}

	cout << "After solve: ";
	for (int it : a) cout << it << " ";
	cout << endl;

	cout << "Count: " << cnt << endl;
	return 0;
}