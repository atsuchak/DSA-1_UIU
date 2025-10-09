
#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

class Stack {
	int arr[100];
	int top;

public: 

	Stack() {
		top = -1;
	}

	bool isEmpty() {
		return top == -1;
	}

	void push(int val) {

		top++;
		arr[top] = val;
	}

	void pop() {
		top--;
	}

	int peek() {
		if(isEmpty()) return -1;

		return arr[top];
	}

};

void print(Stack st) {
	
	if(st.isEmpty()) return;

	Stack s;

	while(!st.isEmpty()) {
		s.push(st.peek());
		st.pop();
	}

	while(!s.isEmpty()) {
		cout << s.peek() << " ";
		s.pop();
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	freopen("D:/Sublime file/input.txt", "r", stdin);
	freopen("D:/Sublime file/output.txt", "w", stdout);

	Stack st;

	int n; cin >> n;
	while(n--) {
		int x; cin >> x;
		st.push(x);
	}

	cin >> n;
	while(n--) st.pop();

	print(st);	 

	return 0;
}