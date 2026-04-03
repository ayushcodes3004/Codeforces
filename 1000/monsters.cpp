#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<pair<int, int>> ans;
        for (int i = 0; i < n; i++)
        {
            long long r = -(a[i] % k);
            if (r == 0)
                r = -k;
            ans.push_back({r, i + 1});
        }
        sort(ans.begin(), ans.end());

        for (auto [num, it] : ans)
        {
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, k;
//         cin >> n >> k;
//         vector<int> a(n);
//         for (int i = 0; i < n; i++)
//         {
//             int temp = 0;
//             cin >> temp;
//             a[i] = (temp % k);
//         }
//         vector<int> ans;
//         for (int i = 0; i < n; i++)
//         {
//             if (a[i] == 0)
//             {
//                 ans.push_back(i + 1);
//             }
//         }
//         k = k - 1;
//         while (k)
//         {
//             for (int i = 0; i < n; i++)
//             {
//                 if (a[i] == k)
//                 {
//                     ans.push_back(i + 1);
//                 }
//             }
//             k--;
//         }
//         for (auto it : ans)
//         {
//             cout << it << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }
