#include <bits/stdc++.h>
using namespace std;

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k, x;
        cin >> n >> k >> x;
        // long long mini = 0;
        // for (int i = 1; i <= k; i++)
        // {
        //     mini += i;
        // }
        // long long maxi = 0;
        // int cnt = 0;
        // for (int i = n; i >= 1; i--)
        // {
        //     cnt++;
        //     maxi += i;
        //     if (cnt == k)
        //         break;
        // }
        long long mini = k * (k + 1) / 2;
        long long maxi = k * (2 * n - k + 1) / 2;

        if (mini <= x && x <= maxi)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}