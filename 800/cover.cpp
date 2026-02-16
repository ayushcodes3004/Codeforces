#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n;
        cin >> s;
        bool cons = false;
        int cnt = 0;
        if (s.size() < 2)
        {
            int cnt = 0;
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == '.')
                    cnt++;
            }
            cout << cnt << endl;
        }

        else
        {
            for (int i = 0; i < s.size() - 2; i++)
            {
                if (s[i] == '.' && s[i + 1] == '.' && s[i + 2] == '.')
                {
                    cons = true;
                }
            }
            if (cons)
            {
                cout << 2 << endl;
            }
            else
            {
                for (int i = 0; i < s.size(); i++)
                {
                    if (s[i] == '.')
                    {
                        cnt++;
                    }
                }
                cout << cnt << endl;
            }
        }
    }
    return 0;
}