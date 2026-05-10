#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x, y, k;
        cin >> x >> y >> k;
        long long total = k * y + k - 1;
        // long long ans = total / (x - 1); ceil value needed a+b-1/b
        long long ans = (total + x - 2) / (x - 1);

        cout << ans + k << endl;
    }
    return 0;
}