#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int x1, y1;
        cin >> x1 >> y1;
        int x2, y2;
        cin >> x2 >> y2;

        vector<pair<int, int>> dirs = {{a, b}, {a, -b}, {-a, b}, {-a, -b}, {b, a}, {-b, a}, {b, -a}, {-b, -a}};
        set<pair<int, int>> king;
        set<pair<int, int>> queen;
        for (int i = 0; i < dirs.size(); i++)
        {
            king.insert({x1 + dirs[i].first, y1 + dirs[i].second});
            queen.insert({x2 + dirs[i].first, y2 + dirs[i].second});
        }

        int cnt = 0;

        for (auto k : king)
        {
            for (auto q : queen)
            {
                if (k == q)
                    cnt++;
            }
        }

        cout << cnt << endl;
    }
    return 0;
}