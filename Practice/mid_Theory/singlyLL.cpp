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

void insertBegin(int val) {
	node* newNode = new node(val);

	newNode->next = head;
	head = newNode;
}

void insertLast(int val) {

	node* newNode = new node(val);

	node* curr = head;
	if (head == NULL) head = newNode;
	else {
		while (curr->next != NULL) curr = curr->next;

		curr->next = newNode;
	}
}

void insertAnyPos(int val, int pos) {
	node* newNode = new node(val);

	node* curr = head;
	if (head == NULL) head = newNode;
	else {
		while (curr != NULL && curr->data != pos) curr = curr->next;

		if (curr == NULL) cout << "Position not available" << endl;
		else {
			newNode->next = curr->next;
			curr->next = newNode;
		}
	}
}

void deleteBegin() {
	if (head == NULL) return;

	node* temp = head;

	head = temp->next;
	delete temp;
}

void deleteEnd() {
	if (head == NULL) return;

	if (head->next == NULL) {
		head = NULL;
		delete head;
		return;
	}

	node* temp = NULL;
	node* temp2 = head;

	while (temp2->next != NULL) {
		temp = temp2;
		temp2 = temp2->next;
	}

	temp->next = NULL;
	delete temp2;
}

void deletePos(int pos) {
	if (head == NULL) return;

	node* prev = NULL;
	node* curr = head;

	if (head->data == pos) {
		head = head->next;
		delete curr;
		return;
	}

	while (curr->data != pos && curr != NULL) {
		prev = curr;
		curr = curr->next;
	}

	if (curr == NULL) cout << "Pos not exist" << endl;
	else {
		prev->next = curr->next;
		delete curr;
	}
}

void printLL() {
	node* curr = head;

	if (head == NULL) cout << "Linked list is empty" << endl;
	else {
		while (curr != NULL) {
			cout << curr->data << " ";
			curr = curr->next;
		}
		cout << endl;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	insertBegin(5);
	insertBegin(8);
	printLL();

	insertBegin(1);
	insertBegin(3);
	printLL();

	insertLast(7);
	insertLast(9);
	printLL();

	insertAnyPos(1, 7);
	insertAnyPos(2, 4);
	printLL();

	deleteBegin();
	printLL();

	deleteEnd();
	printLL();

	deletePos(1);
	printLL();


	return 0;
}