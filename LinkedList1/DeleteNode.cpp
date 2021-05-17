/*Write a function to delete a node in a singly-linked list. You will not be given 
access to the head of the list, instead you will be given access to the node to 
be deleted directly.*/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        
        while(node->next!=NULL)
        {
            node->val = node->next->val;
            if(node->next->next==NULL) node->next=NULL;
            else
                node=node->next;
        }
        
    }
};