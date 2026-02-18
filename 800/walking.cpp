#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int op = 0;
        if (b > d)
        {
            cout << -1 << endl;
        }
        else
        {
            op += (d - b);
            a += op;
            if (a < c)
            {
                cout << -1 << endl;
            }
            else
            {
                op += abs(a - c);
                cout << op << endl;
            }
        }
    }
    return 0;
}