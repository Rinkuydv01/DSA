#include<bits/stdc++.h>
using namespace std;


void warshal(int arr[10][10],int n){
    for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                arr[i][j]=arr[i][j]||(arr[i][k] && arr[k][j]);
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
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
            
        }
    }
    warshal(arr,n);
    
}
