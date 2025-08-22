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

void searchMedian(vector<int> &a, int n) {
    if(n%2 == 0) {
        int result = (a[(n/2)-1] + a[(n/2)])/2;
        cout << result << endl;
    }else {
        cout << a[(n/2)] << endl;
    }
}

int main()
{
    
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];


    sortArr(a, n);
    searchMedian(a, n);

    return 0;
}