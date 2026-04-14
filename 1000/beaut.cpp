#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k, b, s;
        cin >> n >> k >> b >> s;
        long long mini = (k * b);
        long long maxi = (k * b) + (k - 1) * n;
        if (mini > s || s > maxi)
        {
            cout << "-1" << endl;
        }
        else
        {
            vector<long long> ans(n, 0);
            ans[0] = mini;
            s -= mini;
            for (int i = 0; i < n; i++)
            {
                long long add = min(k - 1, s);
                ans[i] += add;
                s -= add;
            }
            for (auto it : ans)
            {
                cout << it << " ";
            }
            cout << endl;
        }
    }
    return 0;
}