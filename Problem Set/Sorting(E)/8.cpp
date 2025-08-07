//not solved

#include<bits/stdc++.h>
using namespace std;

void sortArr(vector<int> &vec, int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(vec[j] > vec[j+1]) swap(vec[j], vec[j+1]);
        }
    }
}

void checkDup(vector<int> &vec, int n) {
    int cur = 0, maxEl = 0, maxVal = 0;
    vector<int> vecN;
    for(int i = 0; i < n-1; i++) {
        if(vec[i] == vec[i+1]) {
            cur++;
            maxEl = max(cur, maxEl);
        }else cur = 0;
    }
}

void printArr(vector<int> &vec, int n) {
    for(int i = 0; i < n; i++) cout << vec[i] << " ";
}

int main() {
    int n; cin >> n;
    vector<int> vec(n);
    for(int i = 0; i < n; i++) cin >> vec[i];

    sortArr(vec, n); 
    printArr(vec, n); 

    return 0;
}