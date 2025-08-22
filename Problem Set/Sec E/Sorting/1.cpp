#include <bits/stdc++.h>
using namespace std;

void sortArr(vector<int> &a, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int smallestElement = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[smallestElement])
                smallestElement = j;
        }
        swap(a[smallestElement], a[i]);
    }
}

int main()
{

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int key; cin >> key;
    sortArr(a, n);

    cout << a[key - 1] << endl;

    return 0;
}