#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* pre;
    
    Node(int data){
        this->data=data;
        this->next=NULL;
        this->pre=NULL;
    }
};

Node* insertB(Node* head,int data){
    Node* temp = new Node(data);
    
    temp->next=head;
    
    if(head!=NULL){
        head->pre = temp;
    }
    head=temp;
    
    return head;
}

Node* insertE(Node* head,int data){
    Node* temp = new Node(data);
    if(head==NULL){
        head = temp;
        return head;
    }
    Node* last = head;
    while(last->next!=NULL){
        last=last->next;
    }
    temp->pre = last;
    last->next= temp;
    return head;
}

Node* insertP(Node* head,int data,int pos){
    Node* temp = new Node(data);
    
    if(pos==1){
        temp->next=head;
        if(head!=NULL){
            head->pre = temp;
        }
        head = temp;
        return head;
    }
        
    Node* curr = head;
    for(int i=1;i<pos-1;i++){
        curr = curr->next;
    }
    if(curr->next==NULL){
        curr->next=temp;
        temp->pre = curr;
        
    }else{
        temp->next = curr->next;
        temp->pre = curr;
        curr->next->pre = temp;
        curr->next = temp;
    }
    
    
    return head;
}

void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void printReverse(Node* head){
    Node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->pre;
    }
    cout<<endl;
}

int main() {
    Node* head = NULL;
    
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        head = insertE(head,element);
    }
    head = insertP(head,6,6);
    head = insertP(head,7,7);
    print(head);
    printReverse(head);
    
    return 0;
}
