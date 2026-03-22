#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> edges;
    for (int i = 0; i < n; i++)
    {
        int u, v;
        cin >> u >> v;
        edges.push_back({u, v});
    }
    vector<vector<int>> adj(n);
    for (auto e : edges)
    {
        int u = e.first, v = e.second;
        adj[u].push_back(v);
    }
    vector<int> indegree(n, 0);
    for (int u = 0; u < n; u++)
    {
        for (auto v : adj[u])
        {
            indegree[v]++;
        }
    }
    queue<int> q;
    for (int i = 0; i < indegree.size(); i++)
    {
        if (indegree[i] == 0)
        {
            q.push(i);
        }
    }
    vector<bool> vis(n, false);
    vector<int> ans;
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        vis[node] = true;
        ans.push_back(node);
        for (auto neigh : adj[node])
        {
            if (!vis[neigh])
            {
                indegree[neigh]--;
                if (indegree[neigh] == 0)
                {
                    q.push(neigh);
                }
            }
        }
    }
    for (auto it : ans)
    {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}
