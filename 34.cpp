// 34	Trapping Rain water problem
#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int trappingWater(int arr[], int n)
{
	vector<int> left(n);
	vector<int> right(n);
	int mx = arr[0];
	left[0] = arr[0];
	for (int i = 1; i < n; i++) //{3,0,0,2,0,4}
	{
		mx = max(mx, arr[i]);
		left[i] = mx;
	} // 3,3,3,3,3,4
	mx = arr[n - 1];
	right[n - 1] = arr[n - 1];
	for (int i = n - 2; i >= 0; i--)
	{
		mx = max(mx, arr[i]);
		right[i] = mx;
	} // 4,4,4,4,4,4
	int pro = 0;
	int c = 0;
	for (int i = 1; i < n - 1; i++)
	{
		int lm = left[i];
		int rm = right[i];
		int m = min(lm, rm);

		if (m > arr[i])
		{
			pro += m - arr[i]; // 3+3+3
			c = 1;
		}
		if (pro < 0 and c == 1)
		{
			return 0;
		}
	}
	return pro;
}
int main()
{
	int x;
	int a[] = {3, 0, 0, 2, 0, 4};
	int n = sizeof(a) / sizeof(int);
	x = trappingWater(a, n);
	cout << x;
	return 0;
} // 3,3,3,5,5,9
// 9,6,6,6,4,4
