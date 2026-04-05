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
        if (n % 2 == 0)
        {
            cout << n / 2 << " " << n / 2 << endl;
        }
        else
        {
            // int mini = 1e9;
            // int a = 0;
            // for (int i = 1; i <= n / 2; i++)
            // {
            //     int hcf = gcd(i, n - i);
            //     int lcm = (i * (n - i)) / hcf;
            //     if (lcm < mini)
            //     {
            //         mini = min(mini, lcm);
            //         a = i;
            //     }
            // }
            // cout << a << " " << n - a << endl;
            int d = n;
            for (int i = 3; i * i <= n; i += 2)
            {
                if (n % i == 0)
                {
                    d = i;
                    break;
                }
            }
            if (d == n)
            {
                cout << 1 << " " << n - 1 << endl;
            }
            else
            {
                cout << n / d << " " << n - (n / d) << endl;
            }
        }
    }
    return 0;
}