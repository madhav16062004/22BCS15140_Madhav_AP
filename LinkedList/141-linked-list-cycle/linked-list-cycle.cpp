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
        ListNode* fast = head;
        ListNode* slow = head;
        bool ans = 0;
        while( fast!= nullptr && fast->next != nullptr && slow != nullptr ){
            fast = fast->next->next;
            slow=slow->next;
            if(fast == slow){
                ans = 1;
                break;
            }

        }
        return ans;
        
    }
};