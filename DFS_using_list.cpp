// You are using GCC
#include <bits/stdc++.h>
using namespace std;

void DFS(int start,list<int>adj[],int V){
    stack<int>s;
    bool visited[V]={false};
    s.push(start);
    visited[start]=true;
    
    while(!s.empty()){
        int node=s.top();
        cout<<node<<" ";
        s.pop();
        
        
        for(auto i=adj[node].rbegin();i!=adj[node].rend();i++){
            int neighbour=(*i);
            if(!visited[neighbour]){
                s.push(neighbour);
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
    DFS(start,adj,V);
    
    return 0;
}