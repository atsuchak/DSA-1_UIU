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

	string s; cin >> s;

	stack<int> st;

	for(char it: s) {
		if(it >= '0' && it <= '9') st.push(it - '0');
		else {
			int b = st.top();
			st.pop();
			int a = st.top();
			st.pop();

			switch(it) {
			case '+': 
				st.push(a+b);
				break;
			case '-': 
				st.push(a-b);
				break;
			case '*': 
				st.push(a*b);
				break;
			case '/': 
				st.push(a/b);
				break;
			default:
				break;
			}
		}
	} 
	
	cout << st.top() << endl;

	return 0;
}