#include "Algorithms.hpp"

bool isConnected(Graph &g)
{
    std::vector<bool> visited(g.num_vertices, false);
    std::queue<int> q;
    q.push(0);
    visited[0] = true;
    int count = 1;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (int v : g.graph[u])
        {
            if (!visited[v])
            {
                visited[v] = true;
                q.push(v);
                count++;
            }
        }
    }
    return count == g.num_vertices;
}