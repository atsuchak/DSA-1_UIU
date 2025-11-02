#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

struct node {
	int data;
	node* left;
	node* right;

	node(int val) {
		data = val;
		left = right = nullptr;
	}
};


node* insert(node* root, int val) {
	if(root == nullptr)
		return new node(val);

	if(val < root->data)
		root->left = insert(root->left, val);
	else 
	root->right = insert(root->right, val);

	return root;
}

node* buildBST(vector<int> arr) {
	node* root = nullptr;

	for(int val : arr) 
		root = insert(root, val);

	return root;
}

bool check(node* root, int key) {
	if(root == nullptr) return 0;

	if(root->data == key) return 1;

	if(root->data > key)
		return check(root->left, key);
	else 
	return check(root->right, key);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	freopen("D:/Sublime file/input.txt", "r", stdin);
	freopen("D:/Sublime file/output.txt", "w", stdout);

	int n; cin >> n;

	vector<int> vec(n);
	for(int i = 0; i < n; i++)
		cin >> vec[i];

	node* root = buildBST(vec);

	int t; cin >> t;
	cout << "Search Result: " << endl;
	while(t--) {
		int x; cin >> x;

		if (check(root, x)) cout << x << ": Found" << endl;
		else cout << x << ": Not Found" << endl;
	}

	return 0;
}