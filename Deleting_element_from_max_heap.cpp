#include <bits/stdc++.h>
using namespace std;

void heapify(int arr[],int n,int i){
    int largest=i;
    int left=2*i+1;
    int right=2*i+2;
    
    if(left<n && arr[left]>arr[largest]){
        largest=left;
    }
    if(right<n && arr[right]>arr[largest]){
        largest=right;
    }
    if(largest!=i){
        swap(arr[i],arr[largest]);
        heapify(arr,n,largest);
    }
}


void build(int arr[],int n){
    for(int i=n/2-1;i>=0;i--){
        heapify(arr,n,i);
    }
}


void insert(int arr[],int *n,int value){
    arr[*n]=value;
    (*n)++;
    int i=(*n)-1;
    
    while(i>0 && arr[(i-1)/2]<arr[i]){
        swap(arr[i],arr[(i-1)/2]);
        i=(i-1)/2;
    }
}


void deletenode(int arr[],int *n,int index){
    arr[index]=arr[(*n)-1];
    (*n)--;
    heapify(arr,(*n),index);
}


void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main() {
    int num;
    int n=0;
    cin>>num;
    int element;
    int arr[100];
    for(int i=0;i<num;i++){
        cin>>element;
        insert(arr,&n,element);
    }
    build(arr,n);
    display(arr,n);
    int index;
    cin>>index;
    deletenode(arr,&n,index);
    display(arr,n);
    
    return 0;
}
