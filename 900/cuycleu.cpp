#include <bits/stdc++.h>
using namespace std;

bool bfs(int n, vector<bool> vis, vector<vector<int>> adj, vector<int> &ans)
{
    queue<pair<int, int>> q;
    vis[n] = true;
    q.push({n, -1});
    while (!q.empty())
    {
        auto top = q.front();
        int node = top.first;
        int parent = top.second;
        q.pop();
        for (auto neighNode : adj[node])
        {
            if (!vis[neighNode])
            {
                q.push({neighNode, node});
                vis[neighNode] = true;
            }
            else if (neighNode != parent)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    vector<vector<int>> adj = {{2, 3, 1}, {2}, {2, 4}, {2}, {2}};
    vector<int> ans;
    int V = adj.size();
    vector<bool> vis(V, 0);
    cout << bfs(0, vis, adj, ans) << endl;
    return 0;
}
