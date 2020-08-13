/*
链表判断有环问题，都是两个指针，一快一慢
在换中一定会相遇，因为慢的走完1圈时，快的走完2圈，一定有快的超过慢的的相遇点
*/


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
        if(head == NULL)
            return false;
        ListNode *p1, *p2;
        p1 = head;
        p2 = head;
        while(p2->next != NULL && p2->next->next != NULL) //not(p1->next!=NULL && p2->next!=NULL)
        {
            p1 = p1->next;
            p2 = p2->next->next;
            if(p1 == p2)
                return true;
        }
        return false;
    }
};
