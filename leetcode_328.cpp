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
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL)
            return head;
        ListNode* fir = head;
        ListNode* sec = head->next;
        ListNode* tmp = sec;
        while(sec && sec->next)
        {
            fir->next = sec->next;
            fir = fir->next;
            sec->next = sec->next->next;
            sec = sec->next;
        }
        fir->next = tmp;
        return head;
    }
};
