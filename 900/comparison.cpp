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
        int maxi = 1;
        int j = 0;
        while (j < n)
        {
            char ch = s[j];
            int i = j + 1;
            int cnt = 1;
            for (int i = j + 1; i < n; i++)
            {
                if (s[i] == ch)
                {
                    cnt++;
                    maxi = max(maxi, cnt);
                }
                else
                {
                    cnt = 0;
                    break;
                }
            }
            j++;
        }
        cout << maxi + 1 << endl;
    }
    return 0;
}