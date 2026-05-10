#include <bits/stdc++.h>
using namespace std;
bool solve(long long x)
{
    long long xi = x;

    while (xi > 0)
    {
        int rem = xi % 10;

        if (rem != 0 && x % rem != 0)
            return false;

        xi /= 10;
    }

    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long x = n;
        while (!solve(x))
        {
            x++;
        }
        cout << x << endl;
    }
    return 0;
}
