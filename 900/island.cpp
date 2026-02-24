#include <bits/stdc++.h>
using namespace std;

void bfs(int r, int c, int m, int n, vector<vector<int>> &vis, vector<vector<int>> &a)
{
    if ((r == m) || (c == n) || (r < 0) || (c < 0))
    {
        return;
    }
    vis[r][c] = 1;
    queue<pair<int, int>> q;
    q.push({r, c});
    while (!q.empty())
    {
        int row = q.front().first;
        int col = q.front().second;
        q.pop();
        for (int i = -1; i <= 1; i++)
        {
            for (int j = -1; j <= 1; j++)
            {
                if (i == 0 && j == 0)
                    continue;
                int nr = row + i;
                int nc = col + j;
                if (nr >= 0 && nc >= 0 && nr < m && nc < n && a[nr][nc] == 1 && vis[nr][nc] == 0)
                {
                    vis[nr][nc] = 1;
                    q.push({nr, nc});
                }
            }
        }
    }
}

int main()
{
    int m, n;
    cin >> m >> n;
    vector<vector<int>> a(m, vector<int>(n));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    vector<vector<int>> vis(m, vector<int>(n, 0));
    int cnt = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (!vis[i][j] && a[i][j] == 1)
            {
                bfs(i, j, m, n, vis, a);
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}