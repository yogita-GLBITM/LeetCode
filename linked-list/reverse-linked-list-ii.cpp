class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {

        if (head == NULL || left == right)
            return head;

        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* before = dummy;
        ListNode* reverse;
        ListNode* after;

        // Move before to the node just before left
        for (int i = 1; i < left; i++) {
            before = before->next;
        }

        reverse = before->next;

        // Reverse the nodes
        for (int i = 0; i < right - left; i++) {

            after = reverse->next;

            reverse->next = after->next;

            after->next = before->next;

            before->next = after;
        }

        return dummy->next;
    }
};

