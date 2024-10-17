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


bool ispresent(node* root,int element){
    if(root==nullptr){
        return false;
    }
    if(root->data==element){
        return true;
    }
    if(element<root->data){
        return ispresent(root->left,element);
    }
    return ispresent(root->right,element);
}

int main() {
    node* root=nullptr;
    cout<<"Enter number of elements in Tree: ";
    int n,element;
    cin>>n;
    cout<<endl<<"Enter Elements:"<<endl;
    for(int i=0;i<n;i++){
        cin>>element;
        root=insert(root,element);
    }
    int num;
    cout<<endl<<"Enter number you want to search: ";
    cin>>num;
    if(ispresent(root,num)){
        cout<<"Element is present";
    }else{
        cout<<"Element is not present";
    }
    
}
