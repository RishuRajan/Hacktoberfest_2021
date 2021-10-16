// C++ program to find sum of boundary elements
// of matrix.
#include <bits/stdc++.h>
using namespace std;

const int MAX = 100;

int getBoundarySum(int a[][MAX], int m, int n)
{
	long long int sum = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (i == 0)
				sum += a[i][j];
			else if (i == m - 1)
				sum += a[i][j];
			else if (j == 0)
				sum += a[i][j];
			else if (j == n - 1)
				sum += a[i][j];
		}
	}
	return sum;
}

// Driver code
int main()
{
	int a[][MAX] = { { 1, 2, 3, 4 }, { 5, 6, 7, 8 }, { 1, 2, 3, 4 }, { 5, 6, 7, 8 } };
	long long int sum = getBoundarySum(a, 4, 4);
	cout << "Sum of boundary elements is " << sum;
	return 0;
}
