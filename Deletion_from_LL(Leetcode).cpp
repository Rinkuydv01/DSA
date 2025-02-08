#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
    
    node(int data){
        this->data = data;
        this->next = nullptr;
    }
};

node* deleteNode(node* head,int data){
    while(head!=NULL && head->data==data){
        node* temp = head;
        head=head->next;
        delete(temp);
    }
    if(head==NULL){
        return NULL;
    }
    node* temp = head;
    while(temp->next!=nullptr){
        if(temp->next->data==data){
            node* newnode = temp->next;
            temp->next=temp->next->next;
            delete(newnode);
        }else{
            temp=temp->next;
        }
    }
    return head;
}

node* insert(node* head,int data){
    node* temp = new node(data);
    if(head==NULL){
        head=temp;
        return head;
    }
    node* last=head;
    while(last->next!=NULL){
        last = last->next;
    }
    last->next = temp;
    return head;
}

void print(node* head){
    node* temp = head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main() {
    node* head = NULL;
    int n;
    cout<<"Enter number of elements in LL: ";
    cin>>n;
    cout<<"Enter elements\n";
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        head = insert(head,element);
    }
    cout<<"Enter element to delete from LL: ";
    int dlt;
    cin>>dlt;
    cout<<"Before Deletion: ";
    print(head);
    head = deleteNode(head,dlt);
    cout<<"After Deletion: ";
    print(head);
    
    return 0;
    
}
