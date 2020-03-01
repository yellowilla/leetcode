/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/
class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (head == NULL)
        {
            return NULL;
        }
        
        unordered_map<Node*, Node*> mp;
        Node* cur = head;
        while (cur != NULL)
        {
            Node* my_cur = new Node(cur->val);
            mp[cur] = my_cur;
            cur = cur->next;
        }
        
        cur = head;
        while (cur != NULL)
        {
            mp[cur]->next = mp[cur->next];
            mp[cur]->random = mp[cur->random];
            cur = cur->next;
        }
        
        return mp[head];
    }
};
