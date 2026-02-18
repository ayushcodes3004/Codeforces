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
        int xorAll = 0;
        for (auto it : a)
        {
            xorAll ^= it;
        }
        if (n % 2 == 0)
        {
            if (xorAll == 0)
            {
                cout << 0 << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
        else
        {
            cout << xorAll << endl;
        }
    }
    return 0;
}