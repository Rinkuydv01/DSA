// You are using GCC
#include <bits/stdc++.h>
using namespace std;

int partition(int arr[],int start,int end){
    int pivot=arr[start];
    
    int count=0;
    for(int i=start+1;i<=end;i++){
        if(arr[i]<=pivot){
            count++;
        }
    }
    int pivot_index=start+count;
    swap(arr[start],arr[pivot_index]);
    
    int i=start;
    int j=end;
    while(i<pivot_index && j>pivot_index){
        if(arr[i]>arr[pivot_index] && arr[j]<arr[pivot_index]){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        if(arr[i]<=arr[pivot_index]){
            i++;
        }
        if(arr[j]>=arr[pivot_index]){
            j--;
        }
    }
    return pivot_index;
}

void quick_sort(int arr[],int start,int end){
    if(start>=end){
        return ;
    }
    int p=partition(arr,start,end);
    quick_sort(arr,start,p-1);
    quick_sort(arr,p+1,end);
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    quick_sort(arr,0,n-1);
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
