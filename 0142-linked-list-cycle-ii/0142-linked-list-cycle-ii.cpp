/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// class Solution {
// public:
//     ListNode *detectCycle(ListNode *head) {
//         unordered_set<ListNode *> visit;
//         ListNode *temp=head;
//         while(temp!=NULL){
//             if(visit.count(temp)==1){
//                 return temp;
//             } visit.insert(temp);
//             temp=temp->next;
             
//         } return nullptr;
//     }
// }; BRUTE FORCE METHOD
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *slow=head;
        ListNode * fast=head; 
        while(fast!=nullptr && fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
            if(fast==slow){ 
                break;
            }
        } if(fast==nullptr ||fast->next==nullptr )return nullptr;
        slow=head;
        while(slow!=fast){
            slow=slow->next;
            fast=fast->next;
        } return fast;
    }
};
