#include <bits/stdc++.h>
using namespace std;

void sortArr(vector<string> &st, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int smallestElement = i;
        for (int j = i + 1; j < n; j++)
        {
            if (st[j].length() < st[smallestElement].length())
                smallestElement = j;
        }
        swap(st[smallestElement], st[i]);
    }
}

void printArr(vector<string> &st, int n)
{
    for (int i = 0; i < n; i++)
        cout << st[i] << " ";
    cout << endl;
}


int main() {

    int n; cin >> n;
    vector<string> st(n);
    for(int i = 0; i < n; i++) cin >> st[i];

    sortArr(st, n);
    printArr(st, n);

    return 0;
}