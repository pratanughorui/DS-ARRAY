// 41	Median of 2 sorted arrays of different size
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void median(vector<int> v1, vector<int> v2)
{
    /*vector<int> v;
    int i = 0, j = 0;
    while (i < v1.size() and j < v2.size())
    {
        if (v1[i] <= v2[j])
        {
            v.push_back(v1[i]);
            i++;
        }
        else if (v1[i] >= v2[j])
        {
            v.push_back(v2[j]);
            j++;
        }
    }
    if (j == v2.size())
    {
        while (i < v1.size())
        {
            v.push_back(v1[i]);
            i++;
        }
    }
    else if (i == v1.size())
    {
        while (j < v2.size())
        {
            v.push_back(v2[j]);
            j++;
        }
    }
    int k = 0, l = v.size() - 1;
    while (k != l and l != k + 1)
    {
        k++;
        l--;
    }
    if (k == l)
    {
        cout << v[k];
    }
    else
    {
        double ans = (double)(v[k] + v[l]) / 2;
        cout << ans;
    }*/
    int le = v1.size() - 1;
    int rs = 0;
    while (le >= 0 and rs < v2.size())
    {
        if (v1[le] > v2[rs])
        {
            swap(v1[le], v2[rs]);
            le--;
            rs++;
        }
        else
        {
            le--;
        }
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    int end = v2.size() - 1;
    int start = 0;
    while (start == end or start == end - 1)
    {
        start++;
        end--;
        if (start == v1.size() - 1)
        {
            start = 0;
            end--;
        }
        if (end == 0)
        {
            end = v1.size() - 1;
            start++;
        }
    }
    if(start==end){
        cout<<
    }
}

int main()
{
    vector<int> v1{2, 3, 5, 8};
    vector<int> v2{10, 12, 14, 16, 18, 20};
    median(v1, v2);
    return 0;
}
