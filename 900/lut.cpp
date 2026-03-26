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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int cnt0 = 0, cnt1 = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                cnt0++;
            }
            else if (a[i] == 1)
            {
                cnt1++;
            }
        }
        long long ans = cnt1 * (1LL << cnt0);
        cout << ans << endl;
    }
    return 0;
}