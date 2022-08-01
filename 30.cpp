// 30	Given an array of size n and a number k, fin all elements that appear more than " n/k " times
#include <iostream>
#include <map>
using namespace std;
void appear(int a[], int n, int k)
{
	map<int, int> m;
	int c = 0;
	for (int i = 0; i < n; i++)
	{
		m[a[i]]++;
	}
	for (auto x : m)
	{
		if (x.second > n / k)
		{
			cout << x.first << " ";
		}
	}
}
int main()
{

	int a[] = {3, 1, 2, 2, 1, 2, 3, 3};
	int n = sizeof(a) / sizeof(int);
	appear(a, n, 4);

	return 0;
}
