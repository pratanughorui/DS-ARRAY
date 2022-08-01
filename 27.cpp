// 27	Find factorial of a large number
#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;
int multi(int size, vector<int> &res, int n)
{
	int carry = 0;
	for (int x = 0; x < size; x++)
	{
		int product = res[x] * n + carry;
		res.push_back(product % 10);
		carry = product / 10;
	}
	while (carry)
	{
		res.push_back(carry % 10);
		carry /= 10;
		size++;
	}
	return size;
}
vector<int> fact(int N)
{
	vector<int> res;
	int size = 1;
	res.push_back(1);
	for (int i = 2; i <= N; i++)
	{
		size = multi(size, res, i);
	}
	return res;
}

int main()
{
	int N = 5;
	vector<int> res;
	res = fact(N);
	for (int i = 0; i < res.size(); i++)
	{
		cout << res[i] << " ";
	}
}
