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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode*> visitedNodes;

        ListNode* ptrA = headA;
        ListNode* ptrB = headB;

        while (ptrA != nullptr) {
            visitedNodes.insert(ptrA);
            ptrA = ptrA->next;
        }
        while (ptrB != nullptr) {
            if (visitedNodes.count(ptrB)) return ptrB;
            ptrB = ptrB->next;
        }
        return nullptr;
    }
};