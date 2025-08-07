#include<bits/stdc++.h>
using namespace std;

void sortArr(pair<int, int> p[], int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if((p[j].second - p[j].first) > (p[j+1].second - p[j+1].first))
                swap(p[j], p[j+1]);
        }
    }
}

void printArr(pair<int, int> p[], int n) {
    for(int i = 0; i < n; i++) {
        cout << "(" << p[i].first << ", " << p[i].second << "), ";
    }
}

int main() {

    int n; cin >> n;
    pair<int, int> p[n];

    for(int i = 0; i < n; i++) cin >> p[i].first >> p[i].second;

    sortArr(p, n);
    printArr(p, n);

    return 0;
}