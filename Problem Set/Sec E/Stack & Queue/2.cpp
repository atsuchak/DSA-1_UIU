#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

void rev(string st) {
	stack<char> stk;

	for(char ch: st) stk.push(ch);

	while(!stk.empty()) {
		cout << stk.top();
		stk.pop();
	}
	cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

	string st; cin >> st;

	rev(st); 

    return 0;
}