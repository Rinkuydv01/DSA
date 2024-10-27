// You are using GCC
#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;
};

node* insert(int arr[],int size,int index){
    if(index>=size){
        return nullptr;
    }
    node* root=(node*)malloc(sizeof(node));
    root->data=arr[index];
    
    root->left=insert(arr,size,2*index+1);
    root->right=insert(arr,size,2*index+2);
    
    return root;
}

void heapify(node* root){
    if(root==nullptr){
        return;
    }
    node* smallest=root;
    if(root->left && root->left->data<smallest->data){
        smallest=root->left;
    }
    if(root->right && root->right->data<smallest->data){
        smallest=root->right;
    }
    if(smallest!=root){
        swap(root->data,smallest->data);
        heapify(smallest);
    }
}

void buildMinHeap(node* root){
    if(root==nullptr){
        return;
    }
    if(root->left!=nullptr){
        buildMinHeap(root->left);
    }
    if(root->right!=nullptr){
        buildMinHeap(root->right);
    }
    heapify(root);
}
void inorder(node* root){
    if(root!=nullptr){
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}
int main() {
    node* root=nullptr;
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter Elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    root=insert(arr,n,0);
    buildMinHeap(root);
    cout<<"Inorder Traversal: ";
    inorder(root);
}
