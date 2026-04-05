#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<bool> freq(26, 0);
        vector<int> prefix(n, 0);
        vector<int> suffix(n, 0);
        for (int i = 0; i < n; i++)
        {
            int cnt = 0;
            freq[s[i] - 'a'] = 1;
            if (freq[s[i] - 'a'])
            {
                for (auto f : freq)
                {
                    if (f)
                    {
                        cnt++;
                    }
                }
            }
            prefix[i] = cnt;
        }
        fill(freq.begin(), freq.end(), 0);
        for (int i = n - 1; i >= 0; i--)
        {
            int cnt = 0;
            freq[s[i] - 'a'] = 1;
            if (freq[s[i] - 'a'])
            {
                for (auto f : freq)
                {
                    if (f)
                    {
                        cnt++;
                    }
                }
            }
            suffix[i] = cnt;
        }
        int ans = 0;
        for (int i = 0; i < n - 1; i++)
        {
            ans = max(ans, prefix[i] + suffix[i + 1]);
        }
        cout << ans << endl;
    }
    return 0;
}