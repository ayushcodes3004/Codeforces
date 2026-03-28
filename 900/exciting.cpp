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
        if (a == b)
        {
            cout << 0 << " " << 0 << endl;
        }
        else
        {
            long long d = abs(a - b);
            long long k1 = (d - (a % d)) % d; // increase
            long long k2 = a % d;             // decrease

            long long k = min(k1, k2);
            cout << d << " " << k << endl;
        }
    }
    return 0;
}