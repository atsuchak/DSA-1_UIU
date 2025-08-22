#include <bits/stdc++.h>
using namespace std;

void printArr(vector<int> &vec) {
    for (int i = 0; i < vec.size(); i++)
        cout << vec[i] << " ";
}

void sortArr(vector<int> &vec) {
    for(int i = 0; i < vec.size() - 1; i++) {
        int smallestEl = i;
        for(int j = i+1; j < vec.size(); j++) {
            if(vec[j] < vec[smallestEl]) smallestEl = j;
        }
        swap(vec[i], vec[smallestEl]);
    }
}

void mergeArr(vector<int> &vec1, vector<int> &vec2)
{
    vector<int> vec;

    for (int j = 0; j < vec1.size(); j++)
        vec.push_back(vec1[j]);
    for (int j = 0; j < vec2.size(); j++)
        vec.push_back(vec2[j]);

    sortArr(vec);
    printArr(vec);
}


int main()
{
    int n;
    cin >> n;
    vector<int> vec1(n);
    vector<int> vec2(n);

    for (int i = 0; i < n; i++)
        cin >> vec1[i];
    for (int i = 0; i < n; i++)
        cin >> vec2[i];

    mergeArr(vec1, vec2);

    return 0;
}