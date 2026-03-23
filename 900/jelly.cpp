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
        long long sum = b;
        for (auto it : arr)
        {
            sum += min(it, a - 1);
        }
        cout << sum << endl;
    }
    return 0;
}