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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (!head || left == right) return head;   // edge case

        ListNode* curr = head;
        int count = 1;
        ListNode* leftmost = nullptr;

        // move curr to left position
        while (count < left && curr != nullptr) {
            leftmost = curr;
            curr = curr->next;
            count++;
        }

        // reverse from left to right
        ListNode* prev = curr;
        ListNode* temp = curr->next;
        ListNode* newnode = nullptr;

        while (count < right && temp != nullptr) {
            newnode = temp->next;
            temp->next = prev;
            prev = temp;
            temp = newnode;
            count++;
        }

        // reconnect
        if (leftmost != nullptr) {
            leftmost->next = prev;
        } else {
            head = prev;   // left == 1 case
        }

        curr->next = temp;   // curr is original left node

        return head;
    }
};
