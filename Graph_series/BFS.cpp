/*
program to create the graph manually using adjency list
*/

#include <bits/stdc++.h>
#include "Queue.h"
using namespace std;

vector<int> BFS(int v, int adj[])
{
    int visited[v] = {0};
    visited[0] = 1;
}

int main()
{

    int n, m; // number of nodes and edges respectively
    cout << "Enter the number of nodes and edeges respectively : ";
    cin >> n >> m;
    vector<int> adj[n + 1]; // adajency matrix to represent the graph

    for (int i = 0; i < m; i++)
    {
        int u, v; // represents number of edges
        cin >> u >> v;
        adj[u].push_back(u);
        adj[v].push_back(v);
    }
    return 0;
}