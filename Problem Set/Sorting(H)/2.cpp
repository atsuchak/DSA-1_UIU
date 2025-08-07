#include <bits/stdc++.h>
using namespace std;

bool checkSum(vector<int> &a, int n) {
    for(int i = 0; i < a.size(); i++) {
        for(int j = 0; j < a.size(); j++) {
            if(a[i] + a[j] == n) {
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int findNum; cin >> findNum;

    if(checkSum(a, findNum)) cout << "True";
    else cout << "False";

    return 0;
}