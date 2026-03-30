#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long p;
        cin >> n >> p;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<long long> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        vector<pair<long long, long long>> v;
        for (int i = 0; i < n; i++)
        {
            v.push_back({b[i], a[i]});
        }
        sort(v.begin(), v.end());
        long long cost = p;
        long long remaining = n - 1;
        for (auto it : v)
        {
            long long b = it.first;
            long long a = it.second;
            if (b >= p)
                break;
            long long use = min(a, remaining);
            cost += (use * b);
            remaining -= use;
            if (remaining == 0)
                break;
        }
        cost += (remaining * p);
        cout << cost << endl;
    }
    return 0;
}