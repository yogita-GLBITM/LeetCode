/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
//  Use two pointers/lists:

// Create one list for nodes less than x.
// Create another list for nodes greater than or equal to x.
// Traverse the original linked list one node at a time.
// If node->val < x, attach it to the less list.
// Otherwise, attach it to the greater/equal list.
// After traversal, connect:
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* lesshead = new ListNode(0);
        ListNode* greaterhead = new ListNode(0);
        ListNode* less = lesshead;
        ListNode* greater = greaterhead;
        while(head !=NULL){
            if(head->val < x){
                less->next=head;
                less=less->next;
            }
            else{
                greater->next=head;
                greater=greater->next;
            }
            head=head->next;
        }
        greater->next=NULL;
        less->next=greaterhead->next;
        return lesshead->next;
    }
};