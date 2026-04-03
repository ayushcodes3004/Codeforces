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
        vector<int> a(n);
        vector<int> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        unordered_map<int, int> cntA, cntB;
        for (int i = 0; i < n;)
        {
            int j = i;
            while (j < n && a[i] == a[j])
            {
                j++;
            }
            cntA[a[i]] = max(cntA[a[i]], j - i);
            i = j;
        }
        for (int i = 0; i < n;)
        {
            int j = i;
            while (j < n && b[i] == b[j])
            {
                j++;
            }
            cntB[b[i]] = max(cntB[b[i]], j - i);
            i = j;
        }
        int ans = 0;
        for (auto [num, f] : cntA)
        {
            ans = max(ans, f + cntB[num]);
        }
        for (auto [num, f] : cntB)
        {
            ans = max(ans, f + cntA[num]);
        }
        cout << ans << endl;
    }
    return 0;
}
