#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cin >> n >> m;
    int op = 0;
    while (m > n)
    {
        if (m % 2 == 0)
        {
            m = m / 2;
        }
        else
        {
            m += 1;
        }
        op++;
    }
    op += n - m;
    cout << op << endl;
    return 0;
}