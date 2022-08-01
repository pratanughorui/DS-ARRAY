#include <iostream>
#include <vector>
using namespace std;
void reverse(vector<int> &nums, int i)
{
    int n = nums.size() - 1;
    while (i < n)
    {
        swap(nums[i], nums[n]);
        i++;
        n--;
    }
}
void np(vector<int> &nums)
{
    int n = nums.size();
    int idx;
    int h = 0;
    for (int i = n - 1; i > 0; i--)
    {
        if (nums[i] > nums[i - 1])
        {
            idx = i;
            h = 1;
            break;
        }
    }
    cout << idx;
    if (h == 1)
    {
        int a = idx;
        int b = nums[idx - 1];
        int c = idx - 1;
        for (int i = idx + 1; i < n; i++)
        {
            if (nums[i] > b and nums[i] <= nums[idx])
            {
                idx = i;
            }
        }
        swap(nums[c], nums[idx]);
        reverse(nums, a);
    }
    else
    {
        reverse(nums, 0);
    }
}
int main()
{
    vector<int> nums{5, 4, 7, 5, 3, 2};
    np(nums);
    for (int i : nums)
    {
        cout << i << " ";
    }
}
