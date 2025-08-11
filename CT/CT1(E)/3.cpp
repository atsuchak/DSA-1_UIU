#include<bits/stdc++.h>
using namespace std;

void checkMedian(vector<int> &a, int n) {

	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
			if (a[j] > a[j + 1]) swap(a[j], a[j + 1]);
		}
	}

	if (n % 2 == 0) {
		cout << (a[n / 2] + a[(n / 2) - 1]) / 2;
	} else {
		cout << a[(n / 2)];
	}

	cout << endl;
}

void solve() {
	int n; cin >> n;

	vector<int> a(n);
	for (int i = 0; i < n; i++) cin >> a[i];

	checkMedian(a, n);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	solve();


	return 0;
}