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

void mergeLL(node* head1, node* head2) {
	node* temp1 = head1;
	node* temp2 = head2;

	while (temp2 != NULL) {
		if (temp1->data <= temp2->data) {
			insert(temp1->data);
		temp1 = temp1->next;
		} else {
			insert(temp2->data);
		temp2 = temp2->next;
		}
	}
}

void printLL() {
	if (head == NULL) cout << "Linked list is empty" << endl;
	else {
		node* temp = head;

		while (temp != NULL) {
			cout << temp->data << " ";
			temp = temp->next;
		}
		cout << endl;
	}
	cout << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	freopen("D:/Sublime file/input.txt", "r", stdin);
	freopen("D:/Sublime file/output.txt", "w", stdout);

	int t; cin >> t;
	while (t--) {
		int x; cin >> x;
		insert(x);
	}
	printLL();
	node* head1 = head;
	head = NULL;

	cin >> t;
	while (t--) {
		int x; cin >> x;
		insert(x);
	}
	printLL();
	node* head2 = head;
	head = NULL;

	mergeLL(head1, head2);

	printLL();

	return 0;
}