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

	node* curr = head;
	while (curr->next != NULL) curr = curr->next;

	curr->next = newNode;
}

void revLL(node* temp) {
	if (temp->next != NULL) revLL(temp->next);

	cout << temp->data << " ";

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
	revLL(head);



	return 0;
}