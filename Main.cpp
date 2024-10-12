#include <bits/stdc++.h>
using namespace std;

void merge(int arr[],int start,int mid,int end){
    int size1=mid-start+1;
    int size2=end-mid;
    
    int arr1[size1],arr2[size2];
    for(int i=0;i<size1;i++){
        arr1[i]=arr[start+i];
    }
    for(int i=0;i<size2;i++){
        arr2[i]=arr[mid+1+i];
    }
    
    int index1=0;
    int index2=0;
    int main_index=start;
    
    while(index1<size1 && index2<size2){
        if(arr1[index1]<arr2[index2]){
            arr[main_index++]=arr1[index1++];
        }else{
            arr[main_index++]=arr2[index2++];
        }
    }
    while(index1<size1){
        arr[main_index++]=arr1[index1++];
    }
    while(index2<size2){
        arr[main_index++]=arr2[index2++];
    }
}

void merge_sort(int arr[],int start,int end){
    if(start>=end){
        return ;
    }
    int mid=(start+end)/2;
    merge_sort(arr,start,mid);
    merge_sort(arr,mid+1,end);
    merge(arr,start,mid,end);
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    merge_sort(arr,0,n-1);
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}