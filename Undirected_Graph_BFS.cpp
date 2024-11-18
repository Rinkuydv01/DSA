// #include <iostream>
// #include <queue>
// using namespace std;

// void bfs(int start, int adjMatrix[10][10], int V) {
//     queue<int> q;
//     bool visited[10] = {false};

//     q.push(start);
//     visited[start] = true;

//     while (!q.empty()) {
//         int node = q.front();
//         q.pop();
//         cout << node << " ";

//         for (int i = 0; i < V; i++) {
//             if (adjMatrix[node][i] == 1 && !visited[i]) {
//                 q.push(i);
//                 visited[i] = true;
//             }
//         }
//     }
// }

// int main() {
//     int V, E;
//     cin >> V >> E;

//     int adjMatrix[10][10] = {0};

//     for (int i = 0; i < E; i++) {
//         int u, v;
//         cin >> u >> v;
//         adjMatrix[u][v] = 1;
//         adjMatrix[v][u] = 1;
//     }

//     bfs(0, adjMatrix, V);

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

void BFS(int start,int matrix[10][10],int V){
    queue<int>q;
    bool visited[10]={false};
    q.push(start);
    visited[start]=true;
    
    while(!q.empty()){
        int node=q.front();
        cout<<node<<" ";
        q.pop();
        for(int i=0;i<V;i++){
            if(matrix[node][i]==1 && !visited[i]){
                q.push(i);
                visited[i]=true;
            }
        }
        
    }
}

int main() {
    int V,E;
    cin>>V>>E;
    int matrix[10][10];
    
    int u,v;
    for(int i=0;i<E;i++){
        cin>>u>>v;
        matrix[u][v]=1;
        matrix[v][u]=1;
    }
    int start;
    cin>>start;
    BFS(start,matrix,V);
}
