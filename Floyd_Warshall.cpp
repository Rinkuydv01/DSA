#include<bits/stdc++.h>
using namespace std;

#define MAX 1000
void fwarshal(int arr[10][10],int n){
    for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(arr[i][k]!=MAX && arr[k][j]!=MAX){
                    arr[i][j]=min(arr[i][j],(arr[i][k] + arr[k][j]));
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]!=MAX)
                cout<<arr[i][j]<<" ";
            else
            cout<<"INF"<<" ";
        }
        cout<<endl;
    }
}

int main() {
    int n;
    cin>>n;
    
    int arr[10][10];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
            if(arr[i][j]<0){
                arr[i][j]=MAX;
            }
        }
    }
    fwarshal(arr,n);
    
}
