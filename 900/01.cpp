#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int cnt0 = 0, cnt1 = 0;
        for (char c : s)
        {
            if (c == '1')
                cnt1++;
            else
                cnt0++;
        }
        int moves = min(cnt0, cnt1);
        if (moves % 2 == 1)
        {
            cout << "DA" << endl;
        }
        else
        {
            cout << "NET" << endl;
        }
    }
    return 0;
}