// full binary tree using array method
#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;
};

struct node* insert(int arr[],int n,int i){
    if(i>n){
        return nullptr;
    }
    node* root=(node*)malloc(sizeof(node));
    root->data=arr[i-1];

    root->left=insert(arr,n,2*i);
    root->right=insert(arr,n,2*i+1);

    return root;
}
void inorder(node* root){
    if(root!=nullptr){
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}

int main() {
    //struct node* root=nullptr;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];        
    }
    node*root=insert(arr,n,1);

    inorder(root);

    return 0;
}
