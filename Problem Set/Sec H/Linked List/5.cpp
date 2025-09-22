#include <bits/stdc++.h>
using namespace std;

struct Node {

	int val;
	Node* next;
};

Node* removeDuplicate(Node* head) {

	Node* temp = head;

	while (temp != nullptr && temp->next != nullptr)
	{
		/* code */
		if (temp->val == temp->next->val) {

			Node* temp2 = temp->next;
			temp->next = temp2->next;
			delete temp2;
		}
		else {

			temp = temp->next;

		}
	}

	return head;



}

void insertatend(Node*& head, int x) {

	Node* newNode = new Node;
	newNode->val = x;

	newNode->next = nullptr;

	if (head == nullptr) {
		head = newNode;
		return;


	}

	Node* temp = head;

	while (temp->next != nullptr) {
		/* code */
		temp = temp->next;
	}

	temp->next = newNode;
}

void printLL(Node* head) {

	Node* temp = head;

	while (temp != nullptr) {

		cout << temp->val << " ";
		temp = temp->next;
	}

	cout << "\n";


}



int main() {

	freopen("")

	Node *l1 = nullptr;

	insertatend(l1, 1);

	insertatend(l1, 1);

	insertatend(l1, 2);

	insertatend(l1, 3);

	insertatend(l1, 3);

	printLL(l1);

	removeDuplicate(l1);
	printLL(l1);


}