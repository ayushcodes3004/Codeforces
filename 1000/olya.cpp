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
        long long ans = 0;
        int mini = INT_MAX;
        int mini2 = INT_MAX;
        while (n--)
        {
            int sz = 0;
            cin >> sz;
            vector<int> temp(sz, 0);
            for (int i = 0; i < sz; i++)
            {
                cin >> temp[i];
            }
            sort(temp.begin(), temp.end());
            mini = min(mini, temp[0]);
            mini2 = min(mini2, temp[1]);
            ans += temp[1];
        }
        ans += mini;
        ans -= mini2;
        cout << ans << endl;
    }
    return 0;
}