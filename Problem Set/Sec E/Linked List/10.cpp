#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

struct node {
	int data;
	node* next = NULL;

	node(int val) {
		data = val;
		next = NULL;
	}
};

node* head = NULL;

void insert(int val) {
	node* newNode = new node(val);

	if (head == NULL) {
		newNode->next = head;
		head = newNode;
		return;
	}

	node* temp = head;
	while (temp->next != NULL) temp = temp->next;

	temp->next = newNode;
}

void cDup(node* temp) {
	while (temp->next != NULL) {
		if (temp->data == temp->next->data) {
			node* tmp = temp->next;
			temp->next = temp->next->next;
			tmp->next = NULL;
			delete tmp;
		}
		temp = temp->next;
	}
}

void printLL() {
	if (head == NULL) cout << "Linked list empty" << endl;
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

	cDup(head);

	printLL();

	return 0;
}