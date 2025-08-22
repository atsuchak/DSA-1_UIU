#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[n];

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int ma = *max_element(a, a + n);
	int b[ma + 1] = {0};
	for (int i = 0; i < n; i++)
	{
		b[a[i]]++;
	}

	int c = *max_element(b, b + ma + 1);
	for (int i = c; i > 0; i--)
	{
		for (int j = 0; j <= ma; j++)
		{
			if (i == b[j])
			{
				for (int k = b[j]; k > 0; k--)
				{
					cout << j << " ";
				}
				b[j] = 0;
			}

		}
	}
}