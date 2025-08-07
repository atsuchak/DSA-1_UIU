#include<bits/stdc++.h>
using namespace std;

void sortArr(vector<int> &a, int n) {
    for(int i = 1; i < n; i++) {
        int key = a[i];
        int j = i - 1;

        while(j >= 0 && a[j] > key) {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
}

int checkConsecutive(vector<int> &a, int n) {

    int maxLn = 1, currLn = 1;
    
    for(int i = 1; i < n; i++) {
        if(a[i] == a[i-1] + 1) {
            currLn++;
            maxLn = max(maxLn, currLn);
        }else {
            currLn = 1;
        }
    }
    return maxLn;
}


int main() {

    int n; cin >> n;
    vector<int> a(n);
    
    for(int i = 0; i < n; i++) cin >> a[i];

    sortArr(a, n);

    cout << checkConsecutive(a, n);

    return 0;
}