/*
program to create the graph manually using adjency matrix
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, m; // number of nodes and edges respectively
    cout << "Enter the number of nodes and edeges respectively : ";
    cin >> n >> m;
    int adj[n + 1][m + 1]; // adajency matrix to represent the graph

    for (int i = 0; i < m; i++)
    {
        int u, v; // represents number of edges
        cin >> u >> v;
        adj[u][v] = 1;
        adj[v][u] = 1;
    }
    return 0;
}