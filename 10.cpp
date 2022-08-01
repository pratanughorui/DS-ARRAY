// 10	Move all the negative elements to one side of the array
#include <iostream>
using namespace std;
void negative(int a[], int n)
{
	int i = -1;
	for (int j = 0; j < n; j++)
	{
		if (a[j] < 0)
		{
			i++;
			swap(a[i], a[j]);
		}
	}
	cout << i << "\n";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}
int main()
{
	int x;
	int arr[] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
	int n = sizeof(arr) / sizeof(int);
	negative(arr, n);

	cin >> x;
	return 0;
}
