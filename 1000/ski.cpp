#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k, q;
        cin >> n >> k >> q;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            a[i] = (a[i] > q) ? 0 : 1;
        }
        long long cnt1 = 0;
        long long ways = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1)
            {
                cnt1++;
            }
            else
            {
                if (cnt1 >= k)
                {
                    long long diff = cnt1 - k + 1;
                    ways += ((diff * (diff + 1)) / 2);
                }
                cnt1 = 0;
            }
        }
        if (cnt1 >= k)
        {
            long long diff = cnt1 - k + 1;
            ways += ((diff * (diff + 1)) / 2);
        }
        cout << ways << endl;
    }
    return 0;
}