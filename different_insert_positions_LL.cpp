// You are using GCC
#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;
};

node* insertatbeginning(node* root,int element){
    node* newnode=new node();
    newnode->data=element;
    if(root==nullptr){
        root=newnode;
        newnode->next=nullptr;
        return root;
    }
    else{
        newnode->next=root;
        root=newnode;
        return root;
    }
    
}

node* insertatend(node* root,int element){
    node* newnode=new node();
    newnode->data=element;
    if(root==nullptr){
        newnode->next=root;
        root=newnode;
        return root;
    }
    else{
        node* temp=root;
        while(temp->next!=nullptr){
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->next=nullptr;
        return root;
    }
}
void display(node* root){
    while(root!=nullptr){
        cout<<root->data<<" ";
        root=root->next;
    }
}

node* insertatpos(node* root,int element,int pos){
    node* newnode=new node();
    newnode->data=element;
    node* temp=root;
    for(int i=1;i<pos-1;i++){
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;
    
    return root;
    
}
int main() {
    node* root=nullptr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        root=insertatend(root,element);
    }
    int element;
    cin>>element;
    root=insertatpos(root,element,3);
    display(root);
    
    return 0;
    
}
