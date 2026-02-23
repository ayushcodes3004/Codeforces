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
        if (n == 2)
        {
            if (a[0] == a[1])
            {
                cout << "No" << endl;
            }
            else
            {
                cout << "Yes" << endl;
                for (int i = 0; i < n; i++)
                {
                    cout << a[i] << " ";
                }
                cout << endl;
            }
        }
        else
        {
            sort(a.begin(), a.end());
            reverse(a.begin(), a.end());
            if (a[0] == a[1])
            {
                if (a[1] == a[n - 1])
                {
                    cout << "No" << endl;
                }
                else
                {
                    swap(a[1], a[n - 1]);
                    cout << "Yes" << endl;
                    for (int i = 0; i < n; i++)
                    {
                        cout << a[i] << " ";
                    }
                    cout << endl;
                }
            }
            else
            {
                cout << "Yes" << endl;
                for (int i = 0; i < n; i++)
                {
                    cout << a[i] << " ";
                }
                cout << endl;
            }
        }
    }
    return 0;
}