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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* pre = head;
        while(head && head->next)
        {
            ListNode* temp = head->next;
            if(head->val == temp->val)
            {
                head->next =  head->next->next;
                free(temp);
            }
            if(head->next != NULL && (head->val != head->next->val))//NuLL->val会报错
                head =  head->next;
        }
        return pre;
    }
};
