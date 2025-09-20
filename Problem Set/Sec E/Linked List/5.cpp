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

int search(int x) {
	if (head == NULL) return 0;

	node* curr = head;
	int cnt = 1;

	while (curr != NULL && curr->data != x) {
		cnt++;
		curr = curr->next;
	}

	if (curr == NULL) return -1;
	else return cnt;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	freopen("D:/Sublime file/input.txt", "r", stdin);
	freopen("D:/Sublime file/output.txt", "w", stdout);


	head = new node(10);
	head->next = new node(20);
	head->next->next = new node(30);
	head->next->next->next = new node(40);

	int x; cin >> x;

	cout << search(x);

	return 0;
}