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
        vector<pair<int, int>> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i].first;
            a[i].second = i;
        }
        sort(a.rbegin(), a.rend());
        vector<long long> x(n + 1);
        x[0] = 0; // headquarter
        long long total = 0;
        for (int i = 0; i < n; i++)
        {
            int d = (i / 2) + 1;
            if (i % 2 == 0)
            {
                x[a[i].second + 1] = d;
            }
            else
            {
                x[a[i].second + 1] = -d;
            }
            total += 2LL * d * a[i].first;
        }
        cout << total << endl;
        for (int i = 0; i <= n; i++)
        {
            cout << x[i] << " ";
        }
        cout << endl;
    }
    return 0;
}