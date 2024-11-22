#include <bits/stdc++.h>
using namespace std;

void BFS(int start, list<int>adj[],int V){
    bool visited[V]={false};
    queue<int>q;
    q.push(start);
    visited[start]=true;
    int parent[V]={-1};
    parent[start]=-1;
    cout<<"Traversal: ";
    
    while(!q.empty()){
        int node=q.front();
        cout<<node<<" ";
        q.pop();
        
        for(auto i=adj[node].begin();i!=adj[node].end();i++){
            int neighbour=(*i);
            if(!visited[neighbour]){
                q.push(neighbour);
                visited[neighbour]=true;
                parent[neighbour]=node;
            }
        }
    }
    cout<<endl;
    cout<<"Smallest path: ";
    int target=V-1;
    if(visited[target]){
        int arr[V];
        int index=0;
        for(int i=target;i!=-1;i=parent[i]){
            arr[index]=i;
            index++;
        }
        for(int i=index-1;i>=0;i--){
            cout<<arr[i]<<" ";
        }
    }
}

int main() {
    int V,E;
    cin>>V>>E;
    
    list<int>adj[V];
    for(int i=0;i<E;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
    }
    int start;
    cin>>start;
    
    BFS(start,adj,V);
    
    return 0;
}
