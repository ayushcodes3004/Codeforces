#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, x;
        cin >> n >> x;
        vector<int> a(n);
        long long maxi = 0;
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
            maxi += ((a[i] + x - 1) / x);
        }
        long long mini = ((sum + x - 1) / x);
        cout << mini << " " << maxi << endl;
    }
    return 0;
}