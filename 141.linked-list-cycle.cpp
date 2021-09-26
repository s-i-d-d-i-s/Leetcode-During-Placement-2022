/*
 * @lc app=leetcode id=141 lang=cpp
 *
 * [141] Linked List Cycle
 */

// @lc code=start
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
        ListNode *slow=head;
        ListNode *fast=head;
        while(slow!= NULL and fast!= NULL){
            slow = slow->next;
            fast = fast->next;
            if(fast == NULL)return false;
            fast = fast->next;
            if(slow == fast) return true;
        }
        return false;
    }
};
// @lc code=end
