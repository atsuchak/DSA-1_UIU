#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

void cSortI(vector<int> &a) {

    int hi = 0;
    for (int i = 0 ; i < a.size(); i++) {
        if (a[i] > hi) hi = a[i];
    }

    hi++;

    vector<int> freq(hi, 0);

    for (int i = 0; i < a.size(); i++) freq[a[i]]++;

    for (int i = 1; i < freq.size(); i++) freq[i] += freq[i - 1];

    vector<int> store(a.size());
    for (int i = a.size() - 1; i >= 0; i--) store[--freq[a[i]]] = a[i];

    for (int i = 0 ; i < store.size(); i++) a[i] = store[i];

    cout << "Ev increase: ";
    for (int i = 0; i < a.size(); i++) cout << a[i] << " ";
    cout << endl;
}

void cSortD(vector<int> &a) {
    int hi = 0;
    for (int i = 0 ; i < a.size(); i++) {
        if (a[i] > hi) hi = a[i];
    }

    hi++;

    vector<int> freq(hi, 0);

    for (int i = 0; i < a.size(); i++) freq[a[i]]++;

    for (int i = freq.size() - 2; i >= 0; i--) freq[i] += freq[i + 1];

    vector<int> store(a.size());
    for (int i = a.size() - 1; i >= 0; i--) store[--freq[a[i]]] = a[i];

    for (int i = 0 ; i < store.size(); i++) a[i] = store[i];

    cout << "Odd decrease: ";
    for (int i = 0; i < a.size(); i++) cout << a[i] << " ";
    cout << endl;
}

void iSortI(vector<int> &a) {
    for (int i = 1; i < a.size(); i++) {
        int key = a[i];
        int j = i - 1;

        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }

    cout << "Ev increase: ";
    for (int i = 0; i < a.size(); i++) cout << a[i] << " ";
    cout << endl;
}

void iSortD(vector<int> &a) {
    for (int i = 1; i < a.size(); i++) {
        int key = a[i];
        int j = i - 1;

        while (j >= 0 && a[j] < key) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }

    cout << "Odd decrease: ";
    for (int i = 0; i < a.size(); i++) cout << a[i] << " ";
    cout << endl;
}

void sSortI(vector<int> &a) {
    for (int i = 0; i < a.size() - 1; i++) {
        int smEl = i;
        for (int j = i + 1; j < a.size(); j++) {
            if (a[j] < a[smEl]) smEl = j;
        }
        int temp = a[i];
        a[i] = a[smEl];
        a[smEl] = temp;
    }

    cout << "Ev increase: ";
    for (int i = 0; i < a.size(); i++) cout << a[i] << " ";
    cout << endl;
}

void sSortD(vector<int> &a) {
    for (int i = 0; i < a.size() - 1; i++) {
        int smEl = i;
        for (int j = i + 1; j < a.size(); j++) {
            if (a[j] > a[smEl]) smEl = j;
        }
        int temp = a[i];
        a[i] = a[smEl];
        a[smEl] = temp;
    }

    cout << "Odd decrease: ";
    for (int i = 0; i < a.size(); i++) cout << a[i] << " ";
    cout << endl;
}

void bSortI(vector<int> &a) {
    for (int i = 0; i < a.size() - 1; i++) {
        for (int j = 0; j < a.size() - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    cout << "Ev increase: ";
    for (int i = 0; i < a.size(); i++) cout << a[i] << " ";
    cout << endl;
}


void bSortD(vector<int> &a) {
    for (int i = 0; i < a.size() - 1; i++) {
        for (int j = 0; j < a.size() - i - 1; j++) {
            if (a[j] < a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    cout << "Odd decrease: ";
    for (int i = 0; i < a.size(); i++) cout << a[i] << " ";
    cout << endl;
}

void solve(vector<int> &a, int n) {
    vector<int> ev, odd;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) ev.push_back(a[i]);
        else odd.push_back(a[i]);
    }

    // cSortI(ev);
    // cSortD(odd);
    // iSortI(ev);
    // iSortD(odd);
    // sSortI(ev);
    // sSortD(odd);
    bSortI(ev);
    bSortD(odd);

    int evCnt = 0;
    int oddCnt = 0;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            a[i] = ev[evCnt];
            evCnt++;
        } else {
            a[i] = odd[oddCnt];
            oddCnt++;
        }
    }
}

void print(vector<int> &a, int n) {
    for (int i = 0; i < n; i++) cout << a[i] << " ";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

    int n; cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    solve(a, n);

    print(a, n);

    return 0;
}