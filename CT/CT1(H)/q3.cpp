#include<bits/stdc++.h>
using namespace std;

void cMedian(vector<int> &vec, int n) {

    sort(vec.begin(), vec.end());

    if(n % 2 == 0) {
        int med = (vec[n/2] + vec[n/2-1])/2;
        cout << med << endl;
    }else {
        cout << vec[n/2] << endl;
    }
}

int main() {

    int n; cin >> n;

    vector<int> vec(n);
    for(int i = 0; i < n; i++) cin >> vec[i];

    cMedian(vec, n);

    return 0;
}

/*
5
20 10 30 50 40

4
20 30 10 40
*/
