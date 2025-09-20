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

void merge(node* temp1, node* temp2) {
	while (temp1 != NULL && temp2 != NULL) {
		if (temp1->data < temp2->data) {
			insert(temp1->data);
			temp1 = temp1->next;
		}
		else {
			insert(temp2->data);
			temp2 = temp2->next;
		}
	}

	if (temp1 == NULL) {
		while (temp2->next != NULL) {
			insert(temp2->data);
			temp2 = temp2->next;
		}
	} else {
		while (temp1 != NULL) {
			insert(temp1->data);
			temp1 = temp1->next;
		}
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

	node* fHead = head;
	head = NULL;

	cin >> n;

	while (n--) {
		int x; cin >> x;
		insert(x);
	}
	printLL();

	node* tHead = head;
	head = NULL;

	merge(fHead, tHead);

	cout << "fHead = " << fHead->data << " tHead = " << tHead->data << endl;

	printLL();

	return 0;
}