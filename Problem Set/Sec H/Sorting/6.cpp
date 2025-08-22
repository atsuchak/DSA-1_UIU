#include <bits/stdc++.h>
using namespace std;

int checkMeeting(pair<int, int> p[], int n) {

    sort(p, p + n);
    for (int i = 0; i < n; i++) cout << "(" << p[i].first << ", " << p[i].second << ") ";
    cout << endl;

    bool check = 1;

    for (int i = 0; i < n - 1; i++) {
        if (p[i + 1].first < p[i].second) {
            return 0;
        }
    }
    return 1;
}


int main() {

    int n = 5;
    cin >> n;
    pair<int, int> p[n];
    for (int i = 0; i < n; i++) cin >> p[i].first >> p[i].second;

    if (checkMeeting(p, n)) cout << "True";
    else cout << "False";


    return 0;
}