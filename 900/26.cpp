#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        int a = 0, b = 0;
        while (n % 2 == 0)
        {
            n = n / 2;
            a++;
        }
        while (n % 3 == 0)
        {
            n = n / 3;
            b++;
        }
        if (n != 1 || a > b)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << (2 * b - a) << endl;
        }
    }
    return 0;
}