#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a;
        cin >> b;
        cin >> c;

        int f = a + c;
        int s = b + c;
        if (f > s)
        {
            cout << "First" << endl;
        }
        else if (f < s)
        {
            cout << "Second" << endl;
        }
        else
        {
            if (c % 2 == 0)
            {
                cout << "Second" << endl;
            }
            else
            {
                cout << "First" << endl;
            }
        }
    }
    return 0;
}
