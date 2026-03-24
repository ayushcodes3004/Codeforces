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
        bool allZero = true;
        bool foundZero = false;
        int l = 0;
        int r = n - 1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                l++;
            }
            else
            {
                break;
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] == 0)
            {
                r--;
            }
            else
            {
                break;
            }
        }
        for (int i = l; i <= r; i++)
        {
            if (a[i] == 0)
                foundZero = true;
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] != 0)
                allZero = false;
        }
        int ans = 0;
        if (allZero)
        {
            ans = 0;
        }
        else if (!foundZero)
        {
            ans = 1;
        }
        else
        {
            ans = 2; // select full and replace with mex and then again select and then it willl get replaced by 0 as x entire wouldnt have any 0
        }
        cout << ans << endl;
    }
    return 0;
}