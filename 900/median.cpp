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
        long long size = n * k;
        vector<int> a(size);
        for (int i = 0; i < size; i++)
        {
            cin >> a[i];
        }
        long long gap = (n / 2) + 1;
        long long pos = size - gap;
        long long sum = 0;
        for (int i = 0; i < k; i++)
        {
            sum += a[pos];
            pos -= gap;
        }

        cout << sum << endl;
    }
    return 0;
}