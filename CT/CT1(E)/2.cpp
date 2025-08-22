#include<bits/stdc++.h>
using namespace std;

int sqRt(int n) {
	if (n == 0 || n == 1) return n;

	int lo = 1, hi = n, ans = 0;

	while (lo <= hi) {
		int mid = (lo + hi) / 2;

		if (mid <= n / mid) {
			ans = mid;
			lo = mid + 1;
		} else {
			hi = mid - 1;
		}
		// cout << "mid: " << mid << " ans: " << ans << " lo: " << lo << " hi: " << hi << endl;
	}

	return ans;


}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n; cin >> n;

	cout << sqRt(n) << endl;

	return 0;
}

