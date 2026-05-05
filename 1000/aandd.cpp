#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        int ans = 1e9;
        for (int i = 0; i < 32; i++)
        {
            long long nb = b + i;
            if (nb == 1)
                continue;
            long long na = a;
            int op = i;
            while (na > 0)

            {
                na /= nb;
                op++;
            }
            ans = min(ans, op);
        }
        cout << ans << endl;
    }
    return 0;
}