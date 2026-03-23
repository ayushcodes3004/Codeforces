#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<int> a(n);
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> prefix(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            prefix[i + 1] = prefix[i] + a[i];
        }
        int total = prefix[n];
        vector<vector<int>> b(q, vector<int>(3));
        for (int i = 0; i < q; i++)
        {
            int l, r, k;
            cin >> l >> r >> k;
            b[i] = {l, r, k};
        }
        for (auto it : b)
        {
            int l = it[0] - 1;
            int r = it[1] - 1;
            int k = it[2];

            int rangeSum = prefix[r + 1] - prefix[l];
            int len = r - l + 1;
            int temp = total - rangeSum + (len * k);

            if (temp % 2 == 0)
            {
                cout << "No" << endl;
            }
            else
            {
                cout << "Yes" << endl;
            }
        }
    }
    return 0;
}