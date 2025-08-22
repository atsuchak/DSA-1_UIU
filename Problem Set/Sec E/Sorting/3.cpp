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

void smallestDiff(vector<int> &a, int n) {
    int smallest = a[n-1];
    for(int i = 1; i < n; i++) {
        if((a[i] - a[i-1]) < smallest) smallest = a[i] - a[i-1];
    }
    cout << smallest << endl;
}

int main()
{

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sortArr(a, n);
    smallestDiff(a, n);

    return 0;
}