#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
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
        vector<int> b(n);
        for (int i = 0; i < n; i++)
        {
            b[i] = abs(a[i] - (i + 1));
        }
        int ans = 0; // very important as gcd(0,anything)=anything and gcd(1,anything)=1
        for (auto el : b)
        {
            ans = gcd(ans, el);
        }
        cout << ans << endl;
    }
    return 0;
}