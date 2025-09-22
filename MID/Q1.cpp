#include<bits/stdc++.h>
using namespace std;

struct node {
	int bID;
	string bTitle;
	string bAuthor;
	int yOfPub;
	int nOfPage;
	node* next;

	node(int id, string title, string author, int publication, int pages) {
		bID = id;
		bTitle = title;
		bAuthor = author;
		yOfPub = publication;
		nOfPage = pages;
		next = NULL;
	}
};

node* head = NULL;

vector<int> store;

void sortARR(vector<int> &a) {
	for (int i = 0; i < a.size() - 1; i++)
		for (int j = 0; j < a.size() - i - 1; j++)
			if (a[j] > a[j + 1]) swap(a[j], a[j + 1]);
}

bool chkID(int id) {
	int lo = 0, hi = store.size() - 1;

	sortARR(store);

	while (lo <= hi) {
		int mid = lo + (hi - lo) / 2;

		if (id == store[mid]) return 0;
		else if (id < store[mid]) hi = mid - 1;
		else lo = mid + 1;
	}

	return 1;
}

void insert(int id, string title, string author, int publication, int pages) {

	node* newNode = new node(id, title, author, publication, pages);

	if (head == NULL) {
		newNode->next = head;
		head = newNode;
		return;
	}

	node* temp = head;

	while (temp->next != NULL && temp->nOfPage < pages) temp = temp->next;

	if (temp->next == NULL) temp->next = newNode;
	else {
		newNode->next = temp->next;
		temp->next = newNode;
	}
}

void printLL(int id) {
	if (head == NULL) cout << "Library dead";
	else {
		node* temp = head;

		while (temp->bID != id) temp = temp->next;

		cout << "Title: " << temp->bTitle << endl;
		cout << "Author: " << temp->bAuthor << endl;
		cout << "Year: " << temp->yOfPub << endl;
		cout << "Pages: " << temp->nOfPage << endl;
	}
}

void printLLYR(int year) {
	if (head == NULL) cout << "Library dead";
	else {
		node* temp = head;

		while (temp->yOfPub != year) temp = temp->next;

		temp = temp->next;
		while (temp != NULL) {
			cout << "Title: " << temp->bTitle << endl;
			cout << "Author: " << temp->bAuthor << endl;
			cout << "Year: " << temp->yOfPub << endl;
			cout << "Pages: " << temp->nOfPage << endl;
			temp = temp->next;
		}
	}
}

int main() {

	cout << "1. Add Book" << endl;
	cout << "2. Search Book" << endl;
	cout << "3. Book published after certain year" << endl;
	cout << "4. Exit" << endl;

	bool chk = 1;

	while (chk) {
		cout << "Enter choice: ";
		int choice; cin >> choice;
		int ID;

		switch (choice) {

		case 1:
			cout << "Enter Book ID: ";
			cin >> ID;
			if (store.empty()) store.push_back(ID);

			if (chkID(ID) || store.size() == 1) {

				cout << "Book not found in array. Adding new record..." << endl;

				cout << "Enter Title: ";
				string title; cin >> title;

				cout << "Enter Author: ";
				string author; cin >> author;

				cout << "Enter year: ";
				int year; cin >> year;

				cout << "Enter pages: ";
				int pages; cin >> pages;

				insert(ID, title, author, year, pages);
				cout << "Record inserted successfully!" << endl;
			} else {
				cout << "Book ID already exists! Cannot insert duplicate" << endl;
			}
			break;

		case 2:
			cout << "Enter Book ID: ";
			cin >> ID;
			if (chkID(ID)) {
				cout << "Book not found in the library." << endl;
			} else {
				cout << "Book Found:" << endl;
				printLL(ID);
			}
			break;

		case 3:
			cout << "Enter year: ";
			int yr; cin >> yr;

			printLLYR(yr);
			break;

		case 4:
			chk = 0;
			break;

		default:
			break;
		}
	}

}