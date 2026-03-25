#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        int n = s1.size();
        unordered_map<char, int> mp;
        for (auto c : s2)
        {
            mp[c]++;
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (mp.find(s1[i]) != mp.end())
            {
                if (mp[s1[i]] < 1)
                    s1[i] = '.';
                mp[s1[i]]--;
            }
            else
            {
                s1[i] = '.';
            }
        }
        string temp;
        for (int i = 0; i < n; i++)
        {
            if (s1[i] != '.')
            {
                temp += s1[i];
            }
        }
        if (temp == s2)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}