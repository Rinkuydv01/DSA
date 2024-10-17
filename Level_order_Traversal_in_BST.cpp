#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;
};

struct node* insert(node* root,int element){
    if(root==nullptr){
        node* newnode=(node*)malloc(sizeof(node));
        newnode->data=element;
        root=newnode;
        return root;
    }
    if(element<root->data){
        root->left=insert(root->left,element);
    }
    if(element>root->data){
        root->right=insert(root->right,element);
    }
    return root;
}

void levelOrderTraversal(struct node* root){
    if(root==nullptr){
        return;
    }
    queue<node*>q;
    q.push(root);
    while(!q.empty()){
        node* temp=q.front();
        cout<<temp->data<<" ";
        q.pop();
        if(temp->left!=nullptr){
            q.push(temp->left);
        }
        if(temp->right!=nullptr){
            q.push(temp->right);
        }
    }
}

int main(){
    node* root=nullptr;
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int element;
    cout<<"Enter elements to insert in BST:"<<endl;
    for(int i=0;i<n;i++){
        cin>>element;
        root=insert(root,element);
    }
    cout<<endl<<"Printing level order Traversal"<<endl;
    levelOrderTraversal(root);
    return 0;
}
