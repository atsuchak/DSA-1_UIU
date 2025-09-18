#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

int count(vector<int> &a, int n, int x) {
    int hi = 0;

    for (int i = 0; i < n ; i++) {
        if (a[i] >= hi) hi = a[i];
    }

    hi++;

    vector<int> freq(hi, 0);

    for (int i = 0; i < n;  i++) {
        freq[a[i]]++;
    }

    for (int i = 1; i <= freq.size(); i++) freq[i] += freq[i - 1];

    vector<int> store(n);

    for (int i = n - 1; i >= 0; i--) {
        store[--freq[a[i]]] = a[i];
    }

    for (int i = 0; i < n; i++) cout << store[i] << " ";
    cout << endl;

    return store[x - 1];
}

int inser(vector<int> &a, int n, int x) {
    for (int i = 1; i <= n; i++) {
        int key = a[i];
        int j = i - 1;

        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }

    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;
    return a[x - 1];
}

int select(vector<int> &a, int n, int x) {

    for (int i = 0; i < n - 1; i++) {

        int smallestEl = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[smallestEl]) {
                smallestEl = j;
            }
        }
        int temp = a[i];
        a[i] = a[smallestEl];
        a[smallestEl] = temp;
    }
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;
    return a[x - 1];
}

int bubble(vector<int> &a, int n, int x) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++)
            if (a[j] > a[j + 1]) {
                int temp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp;
            }
    }

    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;
    return a[x - 1];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

    int n; cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int x; cin >> x;

    cout << "Before sort: ";
    for (int i : a) cout << i << " ";
    cout << endl;

    cout << "After sort: ";
    // cout << count(a, n, x);
    // cout << inser(a, n, x);
    // cout << bubble(a, n, x);
    // cout << select(a, n, x);

    return 0;
}