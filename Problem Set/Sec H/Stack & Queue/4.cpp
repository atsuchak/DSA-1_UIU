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
	stack<int> s;

	vector<int> a(n);
	for(int i = 0; i < n; i++) 
		cin >> a[i];

	for(int it: a) 
		s.push(it);

	vector<int> ans;
	while(!s.empty()) {
		ans.push_back(s.top());
		s.pop();
	} 

	for(int it: ans) cout << it << " ";
		cout << endl;

	return 0;
}