// You are using GCC
#include <bits/stdc++.h>
using namespace std;

void BFS(int start,int adj[][100],int V){
    int dist[V];
    int parent[V];
    for(int i=0;i<V;i++){
        dist[i]=-1;
        parent[i]=-1;
    }
    queue<int>q;
    bool visited[V]={false};
    q.push(start);
    visited[start]=true;
    dist[start]=0;
    cout<<"BFS Traversal: ";
    while(!q.empty()){
        int node=q.front();
        cout<<node<<" ";
        q.pop();
        for(int i=0;i<V;i++){
            if(adj[node][i]==1 && !visited[i]){
                q.push(i);
                visited[i]=true;
                dist[i]=dist[node]+1;
                parent[i]=node;
            }
        }
        
    }
    cout<<endl;
    int arr[V];
    int target;
    cin>>target;
    int index=0;
    if(parent[target]==-1){
        cout<<"No path exist";
        return;
    }
    cout<<"Path :";
    for(int i=target;i!=-1;i=parent[i]){
        arr[index++]=i;
    }
    for(int i=index-1;i>0;i--){
        cout<<arr[i]<<"->";
    }
    cout<<arr[0];
    
}
int main() {
    int V,E;
    cin>>V>>E;
    int adj[100][100];
    for(int i=0;i<V;i++){
        for(int j=0;j<V;j++){
            adj[i][j]=0;
        }
    }
    for(int i=0;i<E;i++){
        int u,v;
        cin>>u>>v;
        adj[u][v]=1;
        //adj[v][u]=1;
    }
    int start;
    cin>>start;
    
    BFS(start,adj,V);
    return 0;
}

