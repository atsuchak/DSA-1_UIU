#include<bits/stdc++.h>
using namespace std;

void intsertionSort(vector<int> &a, int n) {
    for(int i = 1; i < n; i++) {
        int key = a[i];
        int j = i - 1;

        while(j >= 0 && abs(a[j]) > abs(key)) {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }

    for(int i = 0; i < n-1; i++) {
        if(abs(a[i]) == abs(a[i+1]) && (a[i] > a[i+1])) swap(a[i], a[i+1]);
    }
    for(int i = 0; i < n; i++) cout << a[i] << " ";
}

int main() {

    int n; cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    intsertionSort(a, n);

    return 0;
}

/*
6
-5 -2 4 7 -4 2
*/
