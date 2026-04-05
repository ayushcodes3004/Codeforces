#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        char c;
        cin >> n >> c;
        string s;
        cin >> s;
        string t = s + s;
        vector<int> nextG(2 * n, 1e9);
        int last = 1e9;
        for (int i = 2 * n - 1; i >= 0; i--)
        {
            if (t[i] == 'g')
            {
                last = i;
            }
            nextG[i] = last;
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == c)
            {
                ans = max(ans, nextG[i] - i);
            }
        }
        cout << ans << endl;
    }
    return 0;
}