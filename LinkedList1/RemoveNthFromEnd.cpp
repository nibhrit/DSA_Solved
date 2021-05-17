//Given the head of a linked list, remove the nth node 
//from the end of the list and return its head



class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        int count = 1;
        ListNode *curr=head, *p = head;
        
        while(curr->next!=NULL)
        {
            count++;
            curr = curr->next;
            if(count>n+1)
            {
                p=p->next;
            }
        }
        if(count==n) return head->next;
        else{
            p->next = p->next->next;
            return head;
        }
        
    }
};