// #include <bits/stdc++.h>
// using namespace std;

// struct node{
//     int data;
//     node* left;
//     node* right;
// };

// struct node* insert(node* root,int element){
//     if(root==nullptr){
//         node* newnode=(node*)malloc(sizeof(node));
//         newnode->data=element;
//         root=newnode;
//         return root;
//     }
//     if(element<root->data){
//         root->left=insert(root->left,element);
//     }
//     if(element>root->data){
//         root->right=insert(root->right,element);
//     }
//     return root;
// }

// void levelOrderTraversal(struct node* root){
//     if(root==nullptr){
//         return;
//     }
//     queue<node*>q;
//     q.push(root);
//     while(!q.empty()){
//         node* temp=q.front();
//         cout<<temp->data<<" ";
//         q.pop();
//         if(temp->left!=nullptr){
//             q.push(temp->left);
//         }
//         if(temp->right!=nullptr){
//             q.push(temp->right);
//         }
//     }
// }

// int main(){
//     node* root=nullptr;
//     int n;
//     cout<<"Enter number of elements: ";
//     cin>>n;
//     int element;
//     cout<<"Enter elements to insert in BST:"<<endl;
//     for(int i=0;i<n;i++){
//         cin>>element;
//         root=insert(root,element);
//     }
//     cout<<endl<<"Printing level order Traversal"<<endl;
//     levelOrderTraversal(root);
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;


struct node{
    int data;
    node* left;
    node* right;
};

struct node* insert(struct node* root,int element){
    if(root==nullptr){
        node* newnode=(node*)malloc(sizeof(node));
        newnode->data=element;
        newnode->left=newnode->right=nullptr;
        root=newnode;
        return root;
    }
    if(element<root->data){
        root->left=insert(root->left,element);
    }else if(element>root->data){
        root->right=insert(root->right,element);
    }
    return root;
}

void level_order_Traversal(struct node* root){
    if(root==nullptr){
        return;
    }
    queue<node*>q;
    q.push(root);
    while(!q.empty()){
        node* temp=q.front();
        cout<<temp->data<<" ";
        if(temp->left!=nullptr){
            q.push(temp->left);
        }
        if(temp->right!=nullptr){
            q.push(temp->right);
        }
        q.pop();
    }
}

int main() {
    struct node* root=nullptr;
    int n;
    cout<<"Enter number of elements to insert: ";
    cin>>n;
    cout<<"Enter elements"<<endl;
    int element;
    for(int i=0;i<n;i++){
        cin>>element;
        root=insert(root,element);
    }
    cout<<endl<<"Level Order Traversal: ";
    level_order_Traversal(root);
    
}
