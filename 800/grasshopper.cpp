#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, k;
        cin >> x >> k;
        vector<int> temp;
        if (x % k == 0)
        {
            temp.push_back(x - 1);
            temp.push_back(1);
        }
        else
        {
            temp.push_back(x);
        }
        cout << temp.size() << endl;
        for (auto it : temp)
            cout << it << " ";
        cout << endl;
    }
    return 0;
}
