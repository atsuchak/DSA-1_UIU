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

void mNode(node* temp) {
	int cnt = 1;

	while (temp->next != NULL) {
		cnt++;
		temp = temp->next;
	}

	temp = head;

	if (cnt % 2 == 0) {
		cnt = cnt / 2;
		cnt++;

		while (cnt > 1) {
			cnt--;
			temp = temp->next;
		}
		cout << temp->data;
	} else {
		cnt = cnt / 2;
		cnt++;

		while (cnt > 1) {
			cnt--;
			temp = temp->next;
		}
		cout << temp->data;
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
	}
	cout << "NULL" << endl;
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

	mNode(head);

	// printLL();
	return 0;
}