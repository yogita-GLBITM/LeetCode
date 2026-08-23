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
// class Solution {
    // vector<int>arr;

// public:
//     Solution(ListNode* head) {
//         ListNode* temp=head;
    //     while(temp != NULL){
    //         arr.push_back(temp->val);//stores current node value.....Give me the value stored in the node pointed to by temp.
    //         temp=temp->next;//move to next node
    //     }

        
    // }
    
    // int getRandom() {
    //     int index=rand()%arr.size();
    //     return arr[index];
//     }
// };

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */


 //method 2 optimal approach

class Solution {

    // Pointer that will store the head of the linked list
    ListNode* head;

public:

    // Constructor
    // It is called once when the object is created.
    Solution(ListNode* head)
    {
        // 'this' refers to the current object's member variable.
        // Store the given head pointer inside the class.
        this->head = head;
    }

    // This function returns a random node's value
    int getRandom()
    {
        // Create a temporary pointer to traverse the linked list.
        // We don't move the original head pointer.
        ListNode* temp = head;

        // Initially, assume the first node is our answer.
        int ans = temp->val;

        // Count tells us how many nodes we have seen so far.
        // We are currently at the first node.
        int count = 1;

        // Traverse the complete linked list
        while(temp != NULL)
        {
            // rand() generates a random number.
            // rand() % count generates a random number
            // between 0 and count-1.
            //
            // Example:
            // count = 1 -> rand()%1 = 0
            // count = 2 -> random is 0 or 1
            // count = 3 -> random is 0,1,2
            //
            // If the random number is 0,
            // replace the current answer.
            if(rand() % count == 0)
            {
                // Select the current node as the new answer.
                ans = temp->val;
            }

            // Move to the next node
            temp = temp->next;

            // Increase the number of nodes seen so far
            count++;
        }

        // Return the randomly selected value
        return ans;
    }
};