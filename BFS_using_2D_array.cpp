// You are using GCC
#include <bits/stdc++.h>
using namespace std;

void BFS(int start,int matrix[100][100],int V){
    queue<int>q;
    q.push(start);
    bool visited[V]={false};
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
    int matrix[100][100]={0};
    
    for(int i=0;i<E;i++){
        int u,v;
        cin>>u>>v;
        matrix[u][v]=1;
    }
    int start;
    cin>>start;
    BFS(start,matrix,V);
    
    return 0;
}
