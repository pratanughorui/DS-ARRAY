#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <deque>
#include <map>
using namespace std;
bool fun(deque<char> d, int sum)
{
	int c = 0;
	while (!d.empty())
	{
		c = c + (int)d.front();
		d.pop_front();
	}
	if (c == sum)
	{
		return true;
	}
	return false;
}
int main()
{
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	string s = "abab";
	vector<int> ans;
	string p = "ab";
	map<char, int> m;
	deque<char> d;
	int sum = 0;
	for (int i = 0; i < p.size(); i++)
	{
		sum = sum + (int)p[i];
	}
	for (int i = 0; i < s.size(); i++)
	{
		d.push_back(s[i]);
		if (d.size() == p.size())
		{
			if (fun(d, sum))
			{
				ans.push_back((i + 1) - p.size());
			}
			d.pop_front();
		}
	}
	for (int x : ans)
	{
		cout << x << " ";
	}
}
