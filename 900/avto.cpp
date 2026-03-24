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
        if (n < 4 || (n % 2 == 1))
        {
            cout << -1 << endl;
        }
        else
        {
            long long maxi = floor(n / 4);
            long long mini = ceil(n / 6.0);
            cout << mini << " " << maxi << endl;
        }
    }
    return 0;
}