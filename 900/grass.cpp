#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long s, x;
        cin >> s >> x;
        long long f = 0;
        if (x % 4 == 0)
        {
            f = 0;
        }
        else if (x % 4 == 1)
        {
            f = -x;
        }
        else if (x % 4 == 2)
        {
            f = 1;
        }
        else
        {
            f = x + 1;
        }
        if (s % 2 == 0)
        {
            f = s + f;
        }
        else
        {
            f = s - f;
        }
        cout << f << endl;
    }
    return 0;
}