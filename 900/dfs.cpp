#include <bits/stdc++.h>
using namespace std;

void dfs(int node, vector<bool> &vis, vector<vector<int>> &adj, vector<int> &ans)
{
    vis[node] = 1;
    ans.push_back(node);
    for (auto neigh : adj[node])
    {
        if (!vis[neigh])
        {
            dfs(neigh, vis, adj, ans);
        }
    }
}

int main()
{
    vector<vector<int>> adj = {{2, 3, 1}, {0}, {0, 4}, {0}, {2}};
    vector<int> ans;
    int V = adj.size();
    vector<bool> vis(V, 0);
    dfs(0, vis, adj, ans);
    for (auto it : ans)
    {
        cout << it << " ";
    }
    return 0;
}