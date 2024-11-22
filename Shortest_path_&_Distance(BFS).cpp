#include <bits/stdc++.h>
using namespace std;

void BFS(int start,int matrix[][10],int V){
    int parent[V];
    bool visited[V]={false};
    queue<int>q;
    q.push(start);
    visited[start]=true;
    parent[start]=-1;
    int distance[V]={-1};
    distance[start]=0;
    
    cout<<"BFS Traversal: ";
    while(!q.empty()){
        int node=q.front();
        cout<<node<<" ";
        q.pop();
        for(int i=0;i<V;i++){
            if(matrix[node][i]==1 && !visited[i]){
                q.push(i);
                visited[i]=true;
                parent[i]=node;
                distance[i]=distance[node]+1;
            }
        }
        
    }
    int target=V-1;
    int arr[V];
    int index=0;
    for(int i=target;i!=-1;i=parent[i]){
        arr[index++]=i;
    }
    cout<<endl<<"Shortest path: ";
    for(int i=index-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<distance[target];
}


int main() {
    int V,E;
    cin>>V>>E;
    
    int matrix[10][10];
    for(int i=0;i<E;i++){
        int u,v;
        cin>>u>>v;
        matrix[u][v]=1;
    }
    BFS(0,matrix,V);
}
