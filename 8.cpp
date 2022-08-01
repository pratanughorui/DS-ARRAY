// 8	Find the "Kth" max and min element of an array
// implementation of piority queue using stl
/*#include <iostream>
#include <queue>
using namespace std;
int main()
{
	int x;
	priority_queue<int> q;

	q.push(7);
	q.push(10);
	q.push(4);
	cout << q.top();
	return 0;
}*/
#include <iostream>
#include <queue>
using namespace std;
void num_of_largest(int arr[], int n, int z)
{
	priority_queue<int, vector<int>, greater<int>> q; // small--high
	for (int i = 0; i < n; i++)
	{
		q.push(arr[i]);
		if (q.size() > z)
		{
			q.pop();
		}
	}
	cout << q.top();
}
void num_of_smallest(int arr[], int n, int z)
{
	priority_queue<int> q; // high--small
	for (int i = 0; i < n; i++)
	{
		q.push(arr[i]);
		if (q.size() > z)
		{
			q.pop();
		}
	}
	cout << q.top();
}
int main()
{
	int x;
	int arr[] = {2, 3, 6, 6, 5};
	int n = sizeof(arr) / sizeof(int);
	num_of_largest(arr, n, 3);
	// num_of_smallest(arr, n, 5);
	cin >> x;
	return 0;
}
