#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

int count(vector<int> &a, int n) {
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

    int sum = 0;
    for (int i : store) sum += i;
    sum = ceil((double)sum / n);

    return sum;
}

int inser(vector<int> &a, int n) {
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

    int sum = 0;
    for (int i : a) sum += i;
    sum = ceil((double)sum / n);

    return sum;
}

int select(vector<int> &a, int n) {

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

    int sum = 0;
    for (int i : a) sum += i;
    sum = ceil((double)sum / n);

    return sum;
}

int bubble(vector<int> &a, int n) {
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

    int sum = 0;
    for (int i : a) sum += i;
    sum = ceil((double)sum / n);

    return sum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

    int n; cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    cout << "Before sort: ";
    for (int i : a) cout << i << " ";
    cout << endl;

    cout << "After sort: ";
    // cout << count(a, n);
    // cout << inser(a, n);
    // cout << bubble(a, n);
    cout << select(a, n);

    return 0;
}