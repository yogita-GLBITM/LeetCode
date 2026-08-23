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
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode dummy(-1);

        // Tail always points to the last node of merged list
        ListNode* tail = &dummy;

        // Traverse both lists
        while(list1 != NULL && list2 != NULL){

            // If list1 value is smaller
            if(list1->val <= list2->val){

                // Attach list1 node
                tail->next = list1;

                // Move list1 ahead
                list1 = list1->next;
            }
            else{

                // Attach list2 node
                tail->next = list2;

                // Move list2 ahead
                list2 = list2->next;
            }

            // Move tail ahead
            tail = tail->next;
        }

        // Attach remaining nodes
        if(list1 != NULL)
            tail->next = list1;

        if(list2 != NULL)
            tail->next = list2;

        // Return merged list
        return dummy.next;
    
    }
};