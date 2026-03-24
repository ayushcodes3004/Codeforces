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
        int ans = 0;
        int op = 0;
        for (int i = n - 1; i >= 1; i--)
        {
            int curr = a[i];
            int prev = a[i - 1];
            while (prev >= curr)
            {
                if (prev == 0)
                {
                    ans = -1;
                    break;
                }
                op++;
                prev = prev / 2;
            }
            a[i - 1] = prev;
        }
        if (ans != -1)
        {
            ans = op;
        }
        cout << ans << endl;
    }
    return 0;
}