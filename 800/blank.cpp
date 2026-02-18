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
        int maxi = 0;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {

            if (a[i] == 0)
            {
                cnt++;
            }
            else
            {

                cnt = 0;
            }
            maxi = max(cnt, maxi);
        }
        cout << maxi << endl;
    }
    return 0;
}