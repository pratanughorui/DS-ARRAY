#include <iostream>
#include <limits.h>
using namespace std;
int minimum_jump(int a[], int n)
{
    int jump = 1;
    int mar = a[0];
    int step = a[0];
    int c = 0;
    if (n == 1)
        return 0;
    else if (a[0] == 0)
        return -1;
    else
    {
        for (int i = 1; i < n; i++)
        {
            if (i == n - 1)
            {
                return jump;
            }
            mar = max(mar, a[i] + i);
            step--;
            if (step == 0)
            {
                jump++;
                if (i >= mar)
                {
                    return -1;
                }
                step = mar - i;
            }
                }
    }
    return jump;
}
int main()
{
    int n = 11;
    int a[n] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    /* int dp[n];
     for (int i = 0; i < n; i++)
     {
         dp[i] = INT_MAX;
     }
     dp[0] = 0;
     for (int i = 1; i < n; i++)
     {
         for (int j = 0; j < i; j++)
         {
             if (dp[j] != INT_MAX and a[j] + j >= i)
             {
                 if (dp[j] + 1 < dp[i])
                 {
                     dp[i] = dp[j] + 1;
                 }
             }
         }
     }
     for (int x : dp)
     {
         cout << x << " ";
     }*/
    int ans = minimum_jump(a, n);
    cout << ans;
}