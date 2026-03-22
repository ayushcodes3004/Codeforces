#include <bits/stdc++.h>
using namespace std;

int n, m;
int cnt = 0;
vector<int> indegree;
vector<vector<int>> adj;

void countWays(vector<bool> &vis, int countV)
{
    if (countV == n)
    {
        cnt++;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (!vis[i] && indegree[i] == 0)
        {
            vis[i] = true;

            for (auto v : adj[i])
                indegree[v]--;

            countWays(vis, countV + 1);

            vis[i] = false;

            for (auto v : adj[i])
                indegree[v]++;
        }
    }
}

int main()
{
    cin >> n >> m;

    adj.resize(n);
    indegree.resize(n, 0);

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        indegree[v]++;
    }

    vector<bool> vis(n, false);
    countWays(vis, 0);

    cout << cnt << endl;

    return 0;
}