// You are using GCC
#include <bits/stdc++.h>
using namespace std;
#define INF 1000

void fwarshall(int matrix[][10],int V){
    int distance[10][10],next[10][10];
    for(int i=0;i<V;i++){
        for(int j=0;j<V;j++){
            if(matrix[i][j]==0 && i!=j){
                distance[i][j]=INF;
                next[i][j]=-1;
            }else{
                distance[i][j]=matrix[i][j];
                next[i][j]=j;
            }
        }
    }
    
    for(int k=0;k<V;k++){
        for(int i=0;i<V;i++){
            for(int j=0;j<V;j++){
                if(distance[i][k]!=INF && distance[k][j]!=INF && distance[i][j]>(distance[i][k]+distance[k][j])){
                    distance[i][j]=distance[i][k]+distance[k][j];
                    next[i][j]=next[i][k];
                }
            }
        }
    }
    int start,end;
    cin>>start>>end;
    if(next[start][end]==-1){
        cout<<"No path exist";
    }else{
    cout<<"Shortest path: ";
        int current=start;
        while(current!=end){
            cout<<current<<" ";
            current=next[current][end];
            
        }
        cout<<end<<endl;
        cout<<"Shortest Distance: "<<distance[start][end];
    }
}

int main() {
    int V,E;
    cin>>V>>E;
    int matrix[10][10]={0};
    
    for(int i=0;i<E;i++){
        int u,v,w;
        cin>>u>>v>>w;
        matrix[u][v]=w;
    }
    fwarshall(matrix,V);
    
}
