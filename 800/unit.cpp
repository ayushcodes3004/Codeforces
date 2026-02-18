// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<int> a(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }

//         int pos = 0;
//         int neg = 0;
//         for (auto it : a)
//         {
//             if (it == 1)
//             {
//                 pos++;
//             }
//             else
//             {
//                 neg++;
//             }
//         }
//         int op = 0;
//         if (pos == neg)
//         {
//             if (neg % 2 == 1)
//                 op = 1;
//             else
//                 op = 0;
//         }
//         else if (pos > neg)
//         {
//             if (neg % 2 == 1)
//             {
//                 op++;
//             }
//             else
//             {
//                 op = 0;
//             }
//         }
//         else
//         {
//             if (neg % 2 == 1)
//             {
//                 op++;
//                 pos++;
//                 neg--;
//             }
//             op += max(0, neg - pos);
//         }
//         cout << op << endl;

//         // int neg = 0;
//         // for (auto i : a)
//         // {
//         //     if (i == -1)
//         //         neg++;
//         // }
//         // int op = 0;
//         // while (neg > n / 2)
//         // {
//         //     neg--;
//         //     op++;
//         // }
//         // if (neg % 2 != 0)
//         // {
//         //     neg--;
//         //     op++;
//         // }
//         // cout << op << endl;
//     }
//     return 0;
// }

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

        int pos = 0, neg = 0;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x == 1)
                pos++;
            else
                neg++;
        }

        int op = 0;

        // to make pos >= neg
        if (pos < neg)
        {
            int need = (neg - pos + 1) / 2;
            op += need;
            neg -= need;
            pos += need;
        }

        // to make even number of negatives
        if (neg % 2 == 1)
        {
            op++;
        }

        cout << op << endl;
    }
    return 0;
}
