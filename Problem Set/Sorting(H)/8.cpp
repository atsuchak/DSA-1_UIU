#include <bits/stdc++.h>
using namespace std;

void sortByLinearTime(vector<int> &a, int n) {
	vector<int> output;

	for (int i = 0; i < n; i++) if (a[i] == 0) output.push_back(a[i]);
	for (int i = 0; i < n; i++) if (a[i] == 1) output.push_back(a[i]);
	for (int i = 0; i < n; i++) if (a[i] == 2) output.push_back(a[i]);

	for (int i = 0; i < n; i++) cout << output[i] << " ";
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n; cin >> n;

	vector<int> a(n);
	for (int i = 0; i < n ; i++) cin >> a[i];

	sortByLinearTime(a, n);

	return 0;
}