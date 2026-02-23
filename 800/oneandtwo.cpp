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
        int cnt = 0;
        for (auto it : a)
        {
            if (it == 2)
                cnt++;
        }
        if (cnt == 0)
        {
            cout << 1 << endl;
        }
        else if (cnt % 2 == 1)
        {
            cout << -1 << endl;
        }
        else
        {
            int it = 0;
            for (int i = 0; i < n; i++)
            {
                if (a[i] == 2)
                {
                    it++;
                }
                if (it == cnt / 2)
                {
                    cout << i + 1 << endl;
                    break;
                }
            }
        }
    }
    return 0;
}