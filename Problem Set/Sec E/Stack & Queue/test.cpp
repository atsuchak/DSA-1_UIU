#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

	cout << "Hello World" << endl;

	cout << "1. Sum" << endl;
	cout << "2. Subtraction" << endl;
	cout << "3. Multiplication" << endl;
	cout << "4. Division" << endl;
	
	cout << "Choose: ";
	cout.flush();
	int choice; cin >> choice;

	int a, b;

	switch(choice) {
	case 1:
		cout << "Enter 1st number: ";
		cout.flush();
		cin >> a;
		cout << "Enter 2nd number: ";
		cout.flush();
		cin >> b;

		cout << "Sum of " << a << " and " << b << " is: " << a+b << endl;
		break;

	case 2:

		cout << "Enter 1st number: ";
		cout.flush();
		cin >> a;
		cout << "Enter 2nd number: ";
		cout.flush();
		cin >> b;

		cout << "Subtraction of " << a << " and " << b << " is: " << a-b << endl;
		break;

	case 3: 
		cout << "Enter 1st number: ";
		cout.flush();
		cin >> a;
		cout << "Enter 2nd number: ";
		cout.flush();
		cin >> b;

		cout << "Multiplication of " << a << " and " << b << " is: " << a*b << endl;
		break;

	case 4: 
		cout << "Enter 1st number: ";
		cout.flush();
		cin >> a;
		cout << "Enter 2nd number: ";
		cout.flush();
		cin >> b;

		cout << "Division of " << a << " and " << b << " is: " << a/b << endl;
		break;

	default: 
		break;
	}

    return 0;
}