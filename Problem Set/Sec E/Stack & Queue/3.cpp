#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

bool check(string st) {
	stack<char> stk;

	for(char ch: st) {
		if(ch == '(' || ch == '{' || ch == '[') stk.push(ch);
		else if(ch == ')' || ch == '}' || ch == ']'){
			if(stk.empty()) return 0;
			else {
				if((stk.top() == '(' && ch == ')') ||
					(stk.top() == '{' && ch == '}') ||
					(stk.top() == '[' && ch == ']'))stk.pop();
					else return 0;
			}
		}
	}

	return stk.empty();
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	freopen("D:/Sublime file/input.txt", "r", stdin);
	freopen("D:/Sublime file/output.txt", "w", stdout);

	string st; cin >> st;

	if(check(st)) cout << "Yes" << endl;
	else cout << "No" << endl;  

	return 0;
}