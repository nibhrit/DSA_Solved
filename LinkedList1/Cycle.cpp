//Given head, the head of a linked list, determine if the linked list has a cycle in it.


class Solution {
public:
    bool hasCycle(ListNode *head) {
        
        
        if(head==NULL  || head->next==NULL) return false;
        if(head->next==head) return true;
        
        ListNode *prev;
        while(head!=NULL)
        {
            prev = head;
            if(head->next && head->next->val==NULL)
                return true;
            head=head->next;
            prev->val = NULL;
        }
        return false;
    }
};