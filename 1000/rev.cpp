#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool flag = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] > s[i + 1])
        {
            cout << "Yes" << endl;
            cout << i + 1 << " " << i + 2 << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        cout << "No" << endl;
    return 0;
}
