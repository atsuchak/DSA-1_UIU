#include<bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &a, int n) {
	for (int i = 1; i < n; i++) {
		int key = a[i];
		int j = i - 1;

		while (key < a[j] && j >= 0) {
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = key;
	}
}


int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n; cin >> n;

	vector<int> a(n);
	for (int i = 0; i < n; i++) cin >> a[i];

	insertionSort(a, n);

	for (int i = 0; i < n; i++) cout << a[i] << " ";

	cout << endl;

	return 0;
}

