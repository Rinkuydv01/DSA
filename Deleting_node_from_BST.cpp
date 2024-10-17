// #include <bits/stdc++.h>
// using namespace std;

// struct node{
//     int data;
//     node* left;
//     node* right;
// };
// struct node* insert(struct node* root,int element){
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
// void inorder(node* root){
//     if(root!=nullptr){
//         inorder(root->left);
//         cout<<root->data<<" ";
//         inorder(root->right);
//     }
// }
// node* minimumsuccessor(node* root){
//     if(root==nullptr){
//         return root;
//     }
//     return minimumsuccessor(root->left);
// }
// struct node* deletenode(node* root,int element){
//     if(root==nullptr){
//         cout<<"Element not found";
//         return root;
//     }
//     if(element<root->data){
//         root->left=deletenode(root->left,element);
//     }
//     else if(element>root->data){
//         root->right=deletenode(root->right,element);
//     }else{
//         //if leaf node
//         if(root->left==nullptr && root->right==nullptr){
//             root=nullptr;
//         }else if(root->left==nullptr){
//             root=root->right;
//         }else if(root->right==nullptr){
//             root=root->left;
//         }else{
//             node* temp=minimumsuccessor(root->right);
//             root->data=temp->data;
//             root->right=deletenode(root->right,temp->data);
//         }
//     }
//     return root;
// }
// int main(){
//     node* root=nullptr;
//     int n,element,num;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cin>>element;
//         root=insert(root,element);
//     }
//     cout<<"Enter element u want to delete: ";
//     cin>>num;
//     inorder(root);
//     root=deletenode(root,num);
//     cout<<endl<<"After deleting node"<<endl;
//     inorder(root);
    
    
// }



/////////////////////////////////////////////Improved Code//////////////////////////////////////////


#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;
};

node* insert(node* root,int element){
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

void inorder(node* root){
    if(root!=nullptr){
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}

struct node* minimumsuccessor(node* root){
    if(root==nullptr){
        return root;
    }
    return minimumsuccessor(root->left);
}
bool ispresent=true;
struct node* deletenode(node* root,int element){
    if(root==nullptr){
        cout<<"Element not found";
        ispresent=false;
        return root;
    }else if(element<root->data){
        root->left=deletenode(root->left,element);
    }else if(element>root->data){
        root->right=deletenode(root->right,element);
    }else{
        if(root->left==nullptr && root->right==nullptr){
            root=nullptr;
        }else if(root->left==nullptr){
            root=root->right;
        }else if(root->right==nullptr){
            root=root->left;
        }else{
            node* temp=minimumsuccessor(root->right);
            root->data=temp->data;
            root->right=deletenode(root->right,temp->data);
        }
    }
    return root;
}
int main() {
    node* root=nullptr;
    int n;
    cout<<"Enter number of elements in tree: ";
    cin>>n;
    int element;
    cout<<"Enter elements: "<<endl;
    for(int i=0;i<n;i++){
        cin>>element;
        root=insert(root,element);
    }
    cout<<"Enter num to delete: ";
    int num;
    cin>>num;
    cout<<"Before deletion of node "<<endl;
    inorder(root);
    cout<<endl;
    root=deletenode(root,num);
    if(ispresent==true){
        cout<<endl<<"After deletion of node"<<endl;
        inorder(root);
    }
}
