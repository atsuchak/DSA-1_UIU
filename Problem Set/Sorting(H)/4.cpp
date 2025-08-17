#include <bits/stdc++.h>
using namespace std;

void evSort(vector<int> &a, int n) {
    for (int i = 0 ; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) swap(a[j], a[j + 1]);
        }
    }
}

void oddSort(vector<int> &a, int n) {
    for (int i = 0 ; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (a[j] < a[j + 1]) swap(a[j], a[j + 1]);
        }
    }
}

void sortArr(vector<int> &a, int n)
{
    vector<int> even, odd;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            even.push_back(a[i]);
        else
            odd.push_back(a[i]);
    }

    // sort(even.begin(), even.end());
    // sort(odd.rbegin(), odd.rend());

    evSort(even, even.size());
    oddSort(odd, odd.size());

    int evIndex = 0, oddIndex = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            a[i] = even[evIndex++];
        else
            a[i] = odd[oddIndex++];
    }
}



void printArr(vector<int> &a, int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sortArr(a, n);
    printArr(a, n);

    return 0;
}