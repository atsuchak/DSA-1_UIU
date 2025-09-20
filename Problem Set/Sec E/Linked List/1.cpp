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

void insert (int x) {
	node* newNode = new node(x);

	if (head == NULL) head = newNode;
	else {
		node* curr = head;

		while (curr->next != NULL) curr = curr->next;

		curr->next = newNode;
	}
}

void printLL() {
	if (head == NULL) cout << "Linked list empty" << endl;
	else {
		node* curr = head;

		cout << "Linked List: ";
		while (curr != NULL) {
			cout << curr->data << "->";
			curr = curr->next;
		}
		cout << "NULL";
	}
	cout << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	freopen("D:/Sublime file/input.txt", "r", stdin);
	freopen("D:/Sublime file/output.txt", "w", stdout);

	int n; cin >> n;

	while (n--) {
		int x; cin >> x;

		insert(x);
	}

	printLL();

	return 0;
}