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
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return head;
        ListNode* tmp = head;
        ListNode* tmp_pre = NULL;
        ListNode* p = tmp->next;
        head = head->next;
        while(tmp && tmp->next)
        {
            tmp->next = p->next;
            p->next = tmp;
            if(tmp_pre)
                tmp_pre->next = p;
            tmp_pre = tmp;
            tmp = tmp->next;
            if(tmp == NULL)
                break;
            p = tmp->next;
        }
        return head;
    }
};

