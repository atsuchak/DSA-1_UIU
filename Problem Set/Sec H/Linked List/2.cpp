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

void checkMid() {
	if (head == NULL) return;

	node* temp = head;

	int cnt = -1;

	while (temp->next != NULL) {
		cnt++;
		temp = temp->next;
	}

	int mid = cnt / 2;

	cnt = -1;
	temp = head;

	while (temp->next != NULL) {
		if (cnt == mid) {
			cout << temp->data << endl;
			break;
		} else {
			cnt++;
			temp = temp->next;
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

	checkMid();

	printLL();

	return 0;
}