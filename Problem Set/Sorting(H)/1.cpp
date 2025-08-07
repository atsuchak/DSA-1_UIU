#include <bits/stdc++.h>
using namespace std;

bool checkArr(vector<int> &a, int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(a[j] > a[j+1]) {
                return 0;
            }
        }
    }
    return 1;
}

int main() {
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    if(checkArr(a, n)) cout << "True";
    else cout << "false";

    return 0;
}