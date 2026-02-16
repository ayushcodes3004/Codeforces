#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string x;
        cin >> x;
        string s;
        cin >> s;
        int op = 0;
        bool found = false;
        while (x.length() <= 50)
        {
            if (x.find(s) != string::npos)
            {
                found = true;
                break;
            }
            x += x;
            op++;
        }
        if (!found && x.find(s) != string::npos)
        {
            found = true;
        }
        if (found)
            cout << op << endl;
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}