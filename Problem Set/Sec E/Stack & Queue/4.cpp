#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

void sortStk(stack<int> &s) {
	stack<int> temp;
	int key;

	while(!s.empty()) {

		key = s.top();
		s.pop();
		bool check = 0;

		while(!temp.empty() && temp.top() < key) {
			s.push(temp.top());
			temp.pop();
		}

		temp.push(key);
	}

	while(!temp.empty()) {
		cout << temp.top() << " ";
		temp.pop();
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	freopen("D:/Sublime file/input.txt", "r", stdin);
	freopen("D:/Sublime file/output.txt", "w", stdout);

	int n; cin >> n;

	stack<int> s;
	for(int i = 0; i < n; i++) {
		int x; cin >> x;
		s.push(x);
	}

	sortStk(s); 

	return 0;
}