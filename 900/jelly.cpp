#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, n;
        cin >> a >> b >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        int timer = b - 1;
        int c = b;
        for (auto it : arr)
        {
            if (c + it <= a)
            {
                timer += it;
            }
            else
            {
                timer += a;
            }
        }
        cout << timer << endl;
    }
    return 0;
}