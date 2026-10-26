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
    ListNode* reverseList(ListNode* head) {
        ListNode* newHead = new ListNode();
        ListNode* tail = newHead;

        stack<ListNode*> st;

        ListNode* temp = head;

        while (temp != nullptr) {
            st.push(temp);
            temp = temp->next;
        }

        while (!st.empty()) {
            ListNode* top = st.top();
            top->next = nullptr;
            tail->next = top;
            tail = tail->next;
            st.pop();
        }

        return newHead->next;
    }
};
