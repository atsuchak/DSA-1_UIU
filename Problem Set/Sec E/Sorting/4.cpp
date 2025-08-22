#include <bits/stdc++.h>
using namespace std;

void sortArr(vector<int> &a, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int smallestElement = i;
        for (int j = i + 1; j < n; j++)
        {
            if (abs(a[j]) < abs(a[smallestElement]))
                smallestElement = j;
        }
        swap(a[smallestElement], a[i]);
    }
}

void printArr(vector<int> &a, int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
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