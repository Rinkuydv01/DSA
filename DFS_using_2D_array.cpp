// You are using GCC
#include <bits/stdc++.h>
using namespace std;

void DFS(int start,int matrix[100][100],int V){
    stack<int>s;
    s.push(start);
    bool visited[V]={false};
    visited[start]=true;
    
    while(!s.empty()){
        int node=s.top();
        cout<<node<<" ";
        s.pop();
        
        for(int i=0;i<V;i++){
            if(matrix[node][i]==1 && !visited[i]){
                s.push(i);
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
    DFS(start,matrix,V);
    
    return 0;
}
