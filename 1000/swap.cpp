#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int cnt0 = 0, cnt1 = 0;
        for (auto c : s)
        {
            if (c == '0')
                cnt0++;
            else
                cnt1++;
        }
        int len = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0' && cnt1 > 0)
            {
                len++;
                cnt1--;
            }
            else if (s[i] == '1' && cnt0 > 0)
            {
                len++;
                cnt0--;
            }
            else
            {
                break;
            }
        }
        int ans = s.size() - len;
        cout << ans << endl;
    }
    return 0;
}