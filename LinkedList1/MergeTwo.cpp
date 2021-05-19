//Merge two sorted linked lists and return it as a sorted list. 
//The list should be made by splicing together the nodes of the first two lists.

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *res = NULL;
        
        if(l1==NULL) return l2;
        else if(l2==NULL) return l1;
        
        else if(l1->val<=l2->val)
        {
            res = l1;
            res->next = mergeTwoLists(l1->next,l2);
        }
        
        else if(l2->val<=l1->val)
        {
            res = l2;
            res->next = mergeTwoLists(l1,l2->next);
        }
        
        return res;
    }
};