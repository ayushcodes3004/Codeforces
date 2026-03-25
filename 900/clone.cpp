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
            cin >> a[i];
        sort(a.begin(), a.end());

        int maxi = 1, cnt = 1;
        for (int i = 1; i < n; i++)
        {
            if (a[i] == a[i - 1])
            {
                cnt++;
                maxi = max(maxi, cnt);
            }
            else
            {
                cnt = 1;
            }
        }
        int unique = n - maxi;
        int op = 0;
        while (unique)
        {
            op += 1;
            int take = min(unique, maxi);
            unique -= take;
            op += take;
            maxi = maxi * 2;
        }
        cout << op << endl;
    }
    return 0;
}