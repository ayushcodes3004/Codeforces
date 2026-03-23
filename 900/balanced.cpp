#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int maxi = 0;
        int cnt = 0;
        for (int i = 0; i < n - 1; i++)
        {
            long long diff = abs(a[i] - a[i + 1]);
            if (diff <= k)
            {
                cnt++;
                maxi = max(maxi, cnt);
            }
            else
            {
                cnt = 0;
            }
        }
        cout << n - maxi - 1 << endl;
    }
    return 0;
}