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

        vector<int> val;   
        ListNode* temp = head;
        int cnt = 0;

        
        while (temp != NULL) {
            val.push_back(temp->val);
            temp = temp->next;   
            cnt++;
        }

        if (cnt == 0) return head;

        k = k % cnt;  
        temp = head;

        
        for (int i = 0; i < cnt; i++) {
            temp->val = val[(i - k + cnt) % cnt];  
            temp = temp->next;  
        }

        return head;
    }
};
