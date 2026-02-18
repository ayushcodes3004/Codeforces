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
        // find complement and make sum of each equal
        for (int i = 0; i < n; i++)
        {
            cout << (n - a[i] + 1) << " ";
        }
        cout << endl;
    }
    return 0;
}