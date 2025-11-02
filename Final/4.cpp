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

	vector<int> vec(n);
	for(int i = 0; i < n; i++) 
		cin >> vec[i];

	stack<int> a, b, c;
	for(int i = 0; i < n; i++) 
		a.push(vec[i]);

	int mx;
	while(c.size() != n) {

		mx = INT_MIN;
		while(!a.empty()) {
			mx = max(mx, a.top());
			b.push(a.top());
			a.pop();
		}

		while(!b.empty()) {
			if(b.top() == mx){
				c.push(b.top());
				b.pop();
			}else {
				a.push(b.top());
				b.pop();
			}
		}
	}

	cout << "Condition of stack C: ";
	while(!c.empty()) {
		cout << c.top() << " "; 
		c.pop();
	}
	cout << endl;

	cout << "Condition of stack B: Empty" << endl;
	cout << "Condition of stack A: Empty" << endl;

	return 0;
}