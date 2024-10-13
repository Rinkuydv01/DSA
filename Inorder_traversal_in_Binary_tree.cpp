// You are using GCC
#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node* left;
    struct node* right;
};

//inserting elements
struct node* insert(struct node* root,int element){
    if(root==nullptr){
        struct node* newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=element;
        newnode->left=nullptr;
        newnode->right=nullptr;
        
        return newnode;
    }
    if(element<root->data){
        root->left=insert(root->left,element);
    }
    if(element>root->data){
        root->right=insert(root->right,element);
    }
    return root;
}

//traversing elements in tree
void inorder_traversal(struct node* root){
    if(root!=nullptr){
        inorder_traversal(root->left);
        cout<<root->data<<" ";
        inorder_traversal(root->right);
    }
}


int main(){
    node* root=nullptr;
    int n;
    cin>>n;
    int element;
    for(int i=0;i<n;i++){
        cin>>element;
        root=insert(root,element);
    }
    
    inorder_traversal(root);
    
    return 0;
}
