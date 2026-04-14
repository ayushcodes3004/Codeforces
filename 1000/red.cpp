#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, r, b;
        cin >> n >> r >> b;
        string s;
        int length_of_r = r / (b + 1);
        int extras = r % (b + 1);
        for (int i = 0; i < b + 1; i++)
        {
            for (int j = 0; j < length_of_r; j++)
            {
                s += 'R';
            }
            if (extras > 0)
            {
                s += 'R';
                extras--;
            }
            if (i < b)
            {
                s += 'B';
            }
        }
        cout << s << endl;
    }
    return 0;
}