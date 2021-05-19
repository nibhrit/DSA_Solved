//Given the head of a singly linked list, return true if it is a palindrome.




class Solution {
public:
    bool isPalindrome(ListNode* head) {
        
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        
        ListNode *mid,*end;
        mid=end=head;
        
        while(end->next!=NULL && end->next->next!=NULL)
        {
            mid = mid->next;
            end = end->next->next;
        }
        
        mid->next = reverse(mid->next);
        
        mid=mid->next;
        
        while(mid!=NULL){
            if(head->val != mid->val)
                return false;
            head=head->next;
            mid=mid->next;
        }
        return true;
        
    }
    
    ListNode *reverse(ListNode *head){
        ListNode *prev, *curr, *next;
        prev = next = NULL; curr = head;
        
        while(curr!=NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        
        return prev;
    }
};