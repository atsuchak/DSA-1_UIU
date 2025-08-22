#include <bits/stdc++.h>
using namespace std;

void sortLinkedList(vector<int> &a, int n) {
	for (int i = 1; i < n; i++) {
		int key = a[i];
		int j = i - 1;

		while (j >= 0 && a[j] > key) {
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = key;
	}

	for (int i = 0; i < n; i++) cout << a[i] << " ";
}

// void printArr(vector<int> &a, int n) {
// 	for (int i = 0; i < n; i++) cout << a[i] << " ";
// }

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n; cin >> n;

	vector<int> a(n);
	for (int i = 0; i < n; i++) cin >> a[i];

	sortLinkedList(a, n);

	// for (int i = 0; i < n; i++) cout << a[i] << " ";
	// printArr(a, n);

	return 0;
}