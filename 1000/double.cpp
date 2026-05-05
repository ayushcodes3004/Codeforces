#include <bits/stdc++.h>
using namespace std;

int lcs(string s, string t)
{
    int m = s.size();
    int n = t.size();
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
    for (int i = m - 1; i >= 0; i--)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            if (s[i] == t[j])
            {
                dp[i][j] = 1 + dp[i + 1][j + 1];
            }
            else
            {
                dp[i][j] = 0;
            }
        }
    }
    int maxi = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            maxi = max(maxi, dp[i][j]);
        }
    }
    return maxi;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a;
        cin >> b;
        int m = a.size();
        int n = b.size();
        int c = lcs(a, b);
        cout << (m + n) - 2 * c << endl;
    }
    return 0;
}