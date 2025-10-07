#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	freopen("D:/Sublime file/input.txt", "r", stdin);
	freopen("D:/Sublime file/output.txt", "w", stdout);

	int n; cin >> n; 

	vector<char> a(n);
	for(int i = 0; i < n; i++) 
		cin >> a[i];

	stack<int> st;
	int ans = 0;

	for(char it: a) {
		if(it >= '0' && it <= '9') st.push(it - '0');
		else if(it == 43) {
			ans = st.top();
			st.pop();
			ans += st.top();
		} else if(it == 45) {
			ans = st.top();
			st.pop();
			ans -= st.top();
		} else if(it == 42) {
			ans = st.top();
			st.pop();
			ans *= st.top();
		} else {
			ans = st.top();
			st.pop();
			ans /= st.top();
		}
	} 

	cout << ans << endl;

	return 0;
}