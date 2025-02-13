bool floydCycleDetection(Node* head){
    if(head==NULL){
        return false;
    }
    Node* slow = head;
    Node* fast = head;
    
    while(slow!=NULL && fast!=NULL){
        fast=fast->next;
        if(fast->next!=NULL){
            fast = fast->next;
        }
        slow = slow->next;
        
        if(fast==slow){
            return true;
        }
    }
    return false;
}
