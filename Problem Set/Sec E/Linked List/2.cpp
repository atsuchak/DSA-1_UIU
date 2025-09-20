#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

struct node {
	int data;
	node* next;

	node(int val) {
		data = val;
		next = NULL;
	}
};

node* head = NULL;

void insert(int x) {
	node* newNode = new node(x);

	newNode->next = head;
	head = newNode;
}

void printLL() {
	if (head == NULL) cout << "Linked list empty" << endl;
	else {
		node* curr = head;

		while (curr != NULL) {
			cout << curr-> data << "->";
			curr = curr->next;
		}
		cout << "NULL" << endl;
	}
	cout << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	freopen("D:/Sublime file/input.txt", "r", stdin);
	freopen("D:/Sublime file/output.txt", "w", stdout);

	head = new node(20);
	head->next = new node(30);
	head->next->next = new node(40);

	int x; cin >> x;

	insert(x);

	printLL();

	return 0;
}