#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        bool found = false;
        for (int i = 0; i < n; i++)
        {
            int cnt = 0;
            for (int j = i; j < n; j++)
            {
                if (a[j] == k)
                {
                    cnt++;
                }
                if (cnt > (j - i) / 2)
                {
                    found = true;
                    break;
                }
            }
        }
        if (found)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}