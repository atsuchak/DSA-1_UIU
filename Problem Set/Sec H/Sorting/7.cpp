#include<bits/stdc++.h>
using namespace std;

void uniqueArr(vector<int> &a, int n) {
	int k = 0;
	int count = 0;

	sort(a.begin(), a.end());


	for (int i = 0; i < n; i++) cout << a[i] << " ";
	cout << endl;

	for (int i = 0; i < n; i++ ) {

		int x = a[k];

		for (int j = k + 1 ; j < n; j++) {
			if (x == a[j]) {
				a[j]++;
				count++;
			}
		}
		k++;
	}
	cout << count;
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n; cin >> n;

	vector<int> a(n);
	for (int i = 0; i < n; i++) cin >> a[i];

	uniqueArr(a, n);

	return 0;
}