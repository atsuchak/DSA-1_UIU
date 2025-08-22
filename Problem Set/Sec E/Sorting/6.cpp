#include <bits/stdc++.h>
using namespace std;

void evSort(vector<int> &a, int n) {
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

void oddSort(vector<int> &a, int n) {
    for (int i = 0; i < n - 1; i++)
    {
        int smallestElement = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] > a[smallestElement])
                smallestElement = j;
        }
        swap(a[smallestElement], a[i]);
    }
}

void sortArr(vector<int> &a, int n) {
    vector<int> even, odd;
    for(int i = 0; i < n; i++) {
        if(i % 2 == 0) even.push_back(a[i]);
        else odd.push_back(a[i]);
    }

    // sort(even.begin(), even.end()); 
    // sort(odd.rbegin(), odd.rend());

    int evLength = even.size();
    int oddLength = odd.size();

    evSort(even, evLength);
    oddSort(odd, oddLength);
    
    int evIndex = 0, oddIndex = 0;

    for(int i = 0; i < n; i++) {
        if(i % 2 == 0) {
            a[i] = even[evIndex];
            evIndex++;
        }else {
            a[i] = odd[oddIndex];
            oddIndex++;
        }
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
    // sortRev(a, n);
    printArr(a, n);

    return 0;
}