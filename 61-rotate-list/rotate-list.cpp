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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head) return head;

        vector<int> val;   // fixed typo
        ListNode* temp = head;
        int cnt = 0;

        // Store values and count nodes
        while (temp != NULL) {
            val.push_back(temp->val);
            temp = temp->next;   // fixed pointer movement
            cnt++;
        }

        if (cnt == 0) return head;

        k = k % cnt;  // important to avoid unnecessary rotation

        temp = head;

        // Put rotated values back
        for (int i = 0; i < cnt; i++) {
            temp->val = val[(i - k + cnt) % cnt];  // corrected rotation logic
            temp = temp->next;  // move pointer
        }

        return head;
    }
};
