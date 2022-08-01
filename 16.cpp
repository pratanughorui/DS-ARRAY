// 16	find duplicate in an array of N+1 Integers
#include <iostream>
#include <map>
using namespace std;
void duplicate(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		a[a[i] % n] = a[a[i] % n] + n; // 1,8,15,21,2,3|
	}
	for (int i = 0; i < n; i++)
	{
		if (a[i] / n > 1)
		{
			cout << i << endl;
		}
	}
}
int main()
{

	int a[] = {1, 2, 3, 3, 2, 3};
	int n = sizeof(a) / sizeof(int);
	duplicate(a, n);

	return 0;
}
