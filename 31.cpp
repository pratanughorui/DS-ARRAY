#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v{90, 80, 70, 60, 50};
    int profit = 0;
    int n = v.size();
    for (int i = 1; i < n; i++)
    {

        int sub = v[i] - v[i - 1];
        if (sub > 0)
            profit += sub;
    }

    cout << "Maximum Profit=" << profit;
    return 0;
}