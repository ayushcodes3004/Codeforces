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
        vector<int> b;
        vector<int> c;
        int mini = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            mini = min(mini, a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] == mini)
            {
                b.push_back(a[i]);
            }
            else
            {
                c.push_back(a[i]);
            }
        }
        if (b.size() < 1 || c.size() < 1)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << b.size() << " " << c.size() << endl;
            for (auto it : b)
            {
                cout << it << " ";
            }
            cout << endl;
            for (auto it : c)
            {
                cout << it << " ";
            }
            cout << endl;
        }
    }
    return 0;
}