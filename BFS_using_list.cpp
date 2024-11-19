// You are using GCC
#include <bits/stdc++.h>
using namespace std;

void BFS(int start,list<int>adj[],int V){
    queue<int>q;
    bool visited[V]={false};
    q.push(start);
    visited[start]=true;
    
    while(!q.empty()){
        int node=q.front();
        cout<<node<<" ";
        q.pop();
        
        
        for(auto i=adj[node].begin();i!=adj[node].end();i++){
            int neighbour=(*i);
            if(!visited[neighbour]){
                q.push(neighbour);
                visited[neighbour]=true;
            }
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