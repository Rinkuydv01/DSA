bool floydCycleDetection(Node* head){
    if(head==NULL || head->next==NULL){
        return false;
    }
    Node* slow = head;
    Node* fast = head;

    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast){
            return true;
        }
    }
    return false;
}


// Starting of LOOP in LL
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL || head->next==NULL){
            return NULL;
        }
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;

            if(fast==slow){
                slow = head;

                while(slow!=fast){
                    slow = slow->next;
                    fast = fast->next;

                }
                return slow;
            }
        }
        return NULL;
    }
};
