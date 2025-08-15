#include <bits/stdc++.h>
using namespace std;

void sortArr(vector<string> &st, int n)
{
    //selection sort
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

    //insertion sort
    for (int i = 1; i < n; i++) {
        string key = st[i];
        int j = i - 1;

        while (j >= 0 && st[j].length() > key.length()) {
            st[j + 1] = st[j];
            j--;
        }
        st[j + 1] = key;
    }

    //bubble sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (st[j].length() > st[j + 1].length()) {
                swap(st[j], st[j + 1]);
            }
        }
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
    for (int i = 0; i < n; i++) cin >> st[i];

    sortArr(st, n);
    printArr(st, n);

    return 0;
}