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

void rev(node* temp) {
	if (temp->next != NULL) rev(temp->next);

	cout << temp->data << "->";
}

void insert(int val) {

	node* newNode = new node(val);

	if (head == NULL) {
		newNode->next = head;
		head = newNode;
		return;
	}
	node* curr = head;

	while (curr->next != NULL) curr = curr->next;

	curr->next = newNode;

}

void printLL() {
	if (head == NULL) cout << "Linked list empty" << endl;
	else {
		node* curr = head;

		while (curr != NULL) {
			cout << curr->data << "->";
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

	int n; cin >> n;

	while (n--) {
		int x; cin >> x;

		insert(x);
	}

	printLL();

	rev(head);
	cout << "NULL" << endl;

	return 0;
}