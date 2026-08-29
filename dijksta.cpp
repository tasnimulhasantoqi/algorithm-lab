#include <bits/stdc++.h>
using namespace std;
#define inf 1e8
vector<int> dijkstra(int n, vector<vector<pair<int, int>>> &graph, int source)
{
    vector<int> dist(n + 1, inf);
    dist[source] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, source});
    while (!pq.empty())
    {
        int u = pq.top().second;
        int d = pq.top().first;
        pq.pop();
        if (d > dist[u])
            continue;
        for (auto edge : graph[u])
        {
            int v = edge.first;
            int weight = edge.second;
            if (dist[u] + weight < dist[v])
            {
                dist[v] = dist[u] + weight;
                pq.push({dist[v], v});
            }
        }
    }
    return dist;
}