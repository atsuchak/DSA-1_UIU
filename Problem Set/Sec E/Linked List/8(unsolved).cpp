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

	if (head == NULL) {
		newNode->next = head;
		head = newNode;
		return;
	}

	node* temp = head;
	while (temp->next != NULL) temp = temp->next;

	temp->next = newNode;
}

void check(node* head) {
	node* curr = head;

	while (curr->next != NULL) curr = curr->next;

	int store = curr->data;

	node* temp = head;

	while (temp != curr) {
		if (temp->data == store) {
			curr->next = NULL;
			delete curr;
			return;
		}
		temp = temp->next;
	}
}

void printLL() {
	if (head == NULL) cout << "Linked list empty";
	else {
		node* temp = head;

		while (temp != NULL) {
			cout << temp->data << "->";
			temp = temp->next;
		}
		cout << "NULL" << endl;
	}
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

	check(head);

	printLL();

	return 0;
}