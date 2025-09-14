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

int mid(node* head) {
	node* temp = head;

	int cnt = 0;
	while (temp != NULL) {
		cnt++;
		temp = temp->next;
	}

	int middle = cnt / 2;
	temp = head;

	cnt = 0;
	while (temp != NULL) {
		if (cnt == middle) return temp->data;
		cnt++;
		temp = temp->next;

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

	int mid1 = mid(head);
	head = NULL;

	cin >> t;
	while (t--) {
		int x; cin >> x;
		insert(x);
	}

	int mid2 = mid(head);

	if (mid1 == mid2) cout << mid1 << endl;
	else cout << "null" << endl;

	return 0;
}