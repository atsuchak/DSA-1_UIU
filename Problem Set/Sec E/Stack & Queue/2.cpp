#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

//Build class
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

	void push(char val) {

		top++;
		arr[top] = val;
	}

	void pop() {
		top--;
	}

	char peek() {
		if(isEmpty()) return -1;

		return arr[top];
	}

	void rev(string st) {
		Stack s;

		for(char ch: st) 
			s.push(ch);

		while(!s.isEmpty()) {
			cout << s.peek();
			s.pop();
		}
		cout << endl;
	}

};

// //STL
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

    Stack s;
	string st; cin >> st;

	//for use buildin Stack stl
	rev(st);

	//for use class
	// s.rev(st); 

    return 0;
}