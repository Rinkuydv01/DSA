#include <bits/stdc++.h>
using namespace std;

#define n 4
bool isSafe(int maze[n][n],int visited[n][n],int x,int y){
    if((x<n && y<n) && (x>=0 && y>=0) && (maze[x][y]==1) && (visited[x][y]==0)){
        return true;
    }
    return false;
}

void solve(int maze[n][n],int visited[n][n],string output,vector<string> &ans,int x,int y){
    if(x==n-1 && y==n-1){
        ans.push_back(output);
        return;
    }
    
    visited[x][y]=1;
    
    //Down
    int newX = x+1;
    int newY = y;
    if(isSafe(maze,visited,newX,newY)){
        output.push_back('D');
        solve(maze,visited,output,ans,newX,newY);
        output.pop_back();
    }
    //Left
    newX = x;
    newY = y-1;
    if(isSafe(maze,visited,newX,newY)){
        output.push_back('L');
        solve(maze,visited,output,ans,newX,newY);
        output.pop_back();
    }
    
    //Right
    newX = x;
    newY = y+1;
    if(isSafe(maze,visited,newX,newY)){
        output.push_back('R');
        solve(maze,visited,output,ans,newX,newY);
        output.pop_back();
    }
    //UP
    newX = x-1;
    newY = y;
    if(isSafe(maze,visited,newX,newY)){
        output.push_back('U');
        solve(maze,visited,output,ans,newX,newY);
        output.pop_back();
    }
    
    visited[x][y]=0;
}

int main() {
    int maze[n][n] = {{1,1,0,0},{0,1,1,0},{1,1,1,0},{1,1,1,1}};
    
    int visited[n][n] = {0};
    
    vector<string>ans;
    int x=0;
    int y=0;
    string output;
    
    solve(maze,visited,output,ans,x,y);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<"  ";
    }
    
}
