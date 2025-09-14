#include<bits/stdc++.h>
using namespace std;

int bSearch(vector<int> &vec, int n, int a) {
    int lo = 0, hi = n-1, ans = a;

    bool check = 0;
    int count = 0;
    int store = 0;

    for(int i = n-1; i >= 0; i--) {
        int mid = (lo + hi)/2;

        if(a == vec[mid]) {
            return mid;
            count++;
        }else if(a < vec[mid]) {
            hi = mid - 1;
        }else {
            lo = mid + 1;
        }
    }

    for(int i = 0; i < n; i++) {
        int mid = (lo + hi)/2;

        if(a < vec[mid]) {
            ans = mid -1;
            hi = mid - 1;
        }else {
            lo = mid + 1;
        }
    }

    return -1;
}

int main() {

    int n; cin >> n;

    vector<int> vec(n);
    for(int i = 0; i < n; i++) cin >> vec[i];

    int a; cin >> a;

    cout << bSearch(vec, n, a) << endl;

    return 0;
}

/*
7
2 4 4 4 6 7 9
4

6
2 2 3 3 6 7
2
*/
