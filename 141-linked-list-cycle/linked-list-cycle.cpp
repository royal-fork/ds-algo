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
    bool hasCycle(ListNode *head) {
        ListNode *fast = head;
        ListNode *slow = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;           // move by 1
            fast = fast->next->next;     // move by 2
            if (slow == fast) {          // check after moving
                return true;
            }
        }
        return false;
    }
};
