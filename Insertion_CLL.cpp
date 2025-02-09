// You are using GCC
#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

Node* insert(Node* head,int data){
    Node* temp = new Node(data);
    if(head==NULL){
        temp->next = temp;
        head = temp;
        return head;
    }
    Node* last = head;
    while(last->next!=head){
        last=last->next;
    }
    temp->next = head;
    last->next = temp;
    return head;
}

Node* insertB(Node* head,int data){
    Node* temp = new Node(data);
    if(head==NULL){
        temp->next= temp;
        head = temp;
        return head;
    }
    Node* last = head;
    while(last->next!=head){
        last = last->next;
    }
    temp->next = head;
    last->next = temp;
    head = temp;
    return head;
}

Node* insertP(Node* head,int data,int pos){
    Node* temp = new Node(data);
    
    if(pos == 1){
        return insertB(head,data);
    }
    Node* newNode = head;
    for(int i=1;i<pos-1 && newNode->next!=head;i++){
        newNode = newNode->next;
    }
    if(newNode->next==head){
        temp->next = head;
        newNode->next = temp;
        return head;
    }
    temp->next = newNode->next;
    newNode->next = temp;
    
    return head;
}

void print(Node* head){
    Node* temp = head;
    do{
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    while(temp!=head);
}

int main() {
    Node* head = NULL;
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        head = insertB(head,element);
    }
    head = insertP(head,7,4);
    print(head);
}
