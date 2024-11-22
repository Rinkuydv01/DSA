#include <bits/stdc++.h>
using namespace std;

void BFS(int start,int adj[][10],int V){
    int parent[V]={-1};
    queue<int>q;
    bool visited[V]={false};
    q.push(start);
    visited[start]=true;
    parent[start]=-1;
    
    while(!q.empty()){
        int node=q.front();
        cout<<node<<" ";
        q.pop();
        
        
        for(int i=0;i<V;i++){
            if(adj[node][i]==1 && !visited[i]){
                q.push(i);
                visited[i]=true;
                parent[i]=node;
            }
        }
    }
    cout<<endl;
    
    int arr[V];
    int index=0;
    cout<<"Shortest path: ";
    int target=V-1;
    for(int i=target;i!=-1;i=parent[i]){
        arr[index++]=i;
        
    }
    for(int i=index-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
}

int main() {
    int V,E;
    cin>>V>>E;
    int adj[10][10]={0};
    for(int i=0;i<E;i++){
        int u,v;
        cin>>u>>v;
        adj[u][v]=1;
    }
    BFS(0,adj,V);
}
