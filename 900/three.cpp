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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int ni = 0, nj = 0, nk = 0;
        bool ans = false;
        for (int i = 1; i < n - 1; i++)
        {
            bool flag1 = false;
            bool flag2 = false;
            for (int j = i - 1; j >= 0; j--)
            {
                if (a[j] < a[i])
                {
                    flag1 = true;
                    nj = j;
                    break;
                }
            }
            for (int k = i + 1; k < n; k++)
            {
                if (a[k] < a[i])
                {
                    flag2 = true;
                    nk = k;
                    break;
                }
            }
            if (flag1 && flag2)
            {
                ni = i;
                ans = true;
                break;
            }
        }
        if (ans)
        {
            cout << "Yes" << endl;
            cout << nj + 1 << " " << ni + 1 << " " << nk + 1 << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}