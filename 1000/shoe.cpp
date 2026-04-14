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
        // unordered_map<int, int> freq;
        // for (int i = 0; i < n; i++)
        // {
        //     freq[a[i]]++;
        // }
        bool flag = false;
        // for (auto it : a)
        // {
        //     if (freq[it] == 1)
        //     {
        //         flag = true;
        //         break;
        //     }
        // }
        vector<int> ans(n);
        for (int i = 0; i < n;)
        {
            int j = i;
            while (j < n && a[j] == a[i])
            {
                j++;
            }
            int len = j - i;
            if (len == 1)
            {
                flag = true;
            }
            // rotate
            for (int k = i; k < j - 1; k++)
            {
                ans[k] = k + 2; // 1 for convertig 0 indecxin to 1 and one to remove
            }
            ans[j - 1] = i + 1; // last ko first ka dedo
            i = j;
        }
        if (flag)
        {
            cout << -1 << endl;
        }
        else
        {
            for (int x : ans)
            {
                cout << x << " ";
            }
            cout << endl;
        }
    }
    return 0;
}