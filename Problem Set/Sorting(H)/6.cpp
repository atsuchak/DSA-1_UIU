#include <bits/stdc++.h>
using namespace std;

void checkMeeting(pair<int, int> p[], int n) {
    sort(p, p+n);
    bool check = 1;
    for(int i = 0; i < n; i++) {
        if(p[i].first == p[i+1].first || p[i].second == p[i+1].second) {
            check = 0;
        }
    }

    if(check) cout << "True";
    else cout << "False";
}


int main() {

    int n = 5; 
    cin >> n;
    pair<int, int> p[n];
    for(int i = 0; i < n; i++) cin >> p[i].first >> p[i].second;

    checkMeeting(p, n);


    return 0;
}