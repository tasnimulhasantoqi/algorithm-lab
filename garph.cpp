#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cout << "Enter the number of vertices and edges" << endl;
    cin >> n >> m;
    vector<vector<int>> graph(n + 1);
    cout << "Enter the edges" << endl;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    cout << "The adjacency list is: " << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << i << ": ";
        for (int j : graph[i])
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}