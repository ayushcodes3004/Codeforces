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
        unordered_set<int> st;
        bool found = false;
        for (int i = 0; i < n; i++)
        {
            int el;
            cin >> el;
            if (st.count(el))
            {
                found = true;
            }
            st.insert(el);
        }
        if (found)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}