#include <bits/stdc++.h>
using namespace std;

void DFSUtil(int node, list<int> adj[], bool visited[]) {
    visited[node] = true;
    cout << node << " ";
    for (auto i = adj[node].rbegin(); i != adj[node].rend(); i++) {
        int neighbor = *i;
        if (!visited[neighbor]) {
            DFSUtil(neighbor, adj, visited);
        }
    }
}

void DFS(int start, list<int> adj[], int V) {
    bool visited[V] = {false};
    DFSUtil(start, adj, visited);
}

int main() {
    int V, E;
    cin >> V >> E;
    list<int> adj[V];
    for (int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }
    int start;
    cin >> start;
    DFS(start, adj, V);
    return 0;
}
