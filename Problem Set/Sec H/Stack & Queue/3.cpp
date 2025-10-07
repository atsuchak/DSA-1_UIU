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

	int t; cin >> t;

	stack<int> s1;
	stack<int> s2;

	while(t--) {
		int n; cin >> n;

		if(n == 1) {
			int x; cin >> x;
			s1.push(x);
		}else if(n == 2) {
			while(!s1.empty()) {
				s2.push(s1.top());
				s1.pop();
			}
			s2.pop();
		}else {
			while(!s1.empty()) {
				s2.push(s1.top());
				s1.pop();
			}
			cout << s2.top() << endl;

			while(!s2.empty()) {
				s1.push(s2.top());
				s2.pop();
			}
		}
	} 

	return 0;
}