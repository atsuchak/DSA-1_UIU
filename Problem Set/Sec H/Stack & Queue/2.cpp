#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

vector<int> checkGreater(vector<int> &a, int n) {
	vector<int> ans(n, 0);
	stack<int> st;

	for(int i = n-1; i >= 0; i--) {
		while(!st.empty() && st.top() <= a[i]) st.pop();

		if(st.empty()) ans[i] = -1;
		else ans[i] = st.top();

		st.push(a[i]);
	}

	return ans;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	freopen("D:/Sublime file/input.txt", "r", stdin);
	freopen("D:/Sublime file/output.txt", "w", stdout);

	int n; cin >> n; 

	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];

		vector<int> ans = checkGreater(a, n);

	for(int it: ans) cout << it << " ";
		cout << endl;

	return 0;
}