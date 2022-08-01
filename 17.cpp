// 17	Merge 2 sorted arrays without using Extra space.
// time complexity=O(n1xm1),space complexity=O(1)
#include <iostream>
#include <algorithm>
using namespace std;
void marge(int arr1[], int arr2[], int n, int m)
{
	/*int i=0,j=0;
	while(i<n1 and j<n2){
		if(a1[i]<a2[j]){
			i++;
		}else if(a1[i]>a2[j]){
			swap(a1[i],a2[j]);
			sort(a2,a2+n2);
		}
	}
	for(int i=0;i<n1;i++){
		cout<<a1[i]<<" ";
	}*/
	int l1 = n - 1, s2 = 0, t;

	while (l1 >= 0 && s2 < m)
	{
		if (arr1[l1] > arr2[s2])
		{
			swap(arr1[l1], arr2[s2]);
			s2++;
			l1--;
		}
		else
			s2++;
	}
	sort(arr1, arr1 + n);
	sort(arr2, arr2 + m);
}
void display(int arr1[], int arr2[], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr1[i] << " ";
	}

	for (int i = 0; i < m; i++)
	{
		cout << arr2[i] << " ";
	}
}
int main()
{

	int a1[] = {-5, 3, 6, 12, 15};
	int a2[] = {-12, -10, -6, -3, 4, 10};
	int n1 = sizeof(a1) / sizeof(int);
	int n2 = sizeof(a2) / sizeof(int);
	marge(a1, a2, n1, n2);
	display(a1, a2, n1, n2);

	return 0;
}
