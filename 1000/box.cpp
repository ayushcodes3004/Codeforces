#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> arr(n, vector<int>(m, 0));
        long long sum = 0;
        int cnt = 0;
        bool hasZero = 0;
        int mini = 1e9;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int el;
                cin >> el;
                arr[i][j] = el;
                sum += abs(el);
                if (el == 0)
                    hasZero = 1;
                if (el < 0)
                    cnt++;
                mini = min(mini, abs(el));
            }
        }
        long long ans = 0;
        if (hasZero)
        {
            ans = sum;
        }
        else
        {
            if (cnt % 2 == 0)
            {
                ans = sum;
            }
            else
            {
                ans = sum - 2LL * mini;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
