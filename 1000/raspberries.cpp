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
        int even = 0;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (k != 4)
        {
            int mini = INT_MAX;
            for (auto it : a)
            {
                int m = (it % k);
                if (m == 0)
                {
                    mini = 0;
                    break;
                }
                mini = min(mini, (k - m) % k); // (k - m) % k->Minimum operations to make x divisible by k.
            }
            cout << mini << endl;
        }
        else
        {
            int cnt2 = 0;
            for (auto it : a)
            {
                if (it % 4 == 0)
                {
                    cnt2 += 2;
                }
                else if (it % 2 == 0)
                {
                    cnt2++;
                }
            }
            if (cnt2 >= 2)
            {
                cout << 0 << endl;
                continue;
            }
            int op1 = INT_MAX;
            for (auto x : a)
            {
                op1 = min(op1, ((4 - x % 4) % 4));
            }
            int op2 = INT_MAX;
            vector<int> cost;
            for (auto x : a)
            {
                cost.push_back((2 - x % 2) % 2); //(2 - x % 2) % 2) -> min operation to make x even
            }
            sort(cost.begin(), cost.end());
            op2 = cost[0] + cost[1];
            cout << min(op1, op2) << endl;
        }
    }
    return 0;
}