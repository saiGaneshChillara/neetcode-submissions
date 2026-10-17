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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* head = new ListNode();
        ListNode* tail = head;

        struct Compare {
            bool operator()(ListNode* a, ListNode* b) {
                return a->val > b->val;
            }
        };

        priority_queue<ListNode*, vector<ListNode*>, Compare> pq;

        for (int i = 0; i < lists.size(); i++) {
            if (lists[i] == nullptr) continue;
            pq.push(lists[i]);
        }

        while (!pq.empty()) {
            ListNode* topNode = pq.top();
            pq.pop();
            if (topNode->next != nullptr) pq.push(topNode->next);
            topNode->next = nullptr;
            tail->next = topNode;
            tail = topNode;
        }



        return head->next;
    }
};
