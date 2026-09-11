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
ListNode* reverse(ListNode* head){
    ListNode* prev=nullptr;
    ListNode* curr=head;
    ListNode* next = nullptr;
    while(curr!=nullptr){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;

}
    bool isPalindrome(ListNode* head) {
        ListNode* temp = head;
       int n=0;
        while(temp != NULL){
        n++;
        temp=temp->next;
        }
        temp=head;
        for(int i=0;i<n/2;i++){
            temp=temp->next;
        }
        ListNode* reverseHead = reverse(temp);
        temp=head;
 while(reverseHead !=nullptr){
    if(temp->val != reverseHead->val)
    return false;
    temp=temp->next;
    reverseHead=reverseHead->next;
 }
 return true;
    }
};