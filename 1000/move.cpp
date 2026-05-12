#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ops = 0;
        int sum = 0;
        for (auto c : s)
        {
            if (c == '(')
            {
                sum++;
            }
            if (c == ')')
            {
                sum--;
            }
            if (sum < 0)
            {
                sum = 0;
                ops++;
            }
        }
        cout << ops << endl;
    }
    return 0;
}