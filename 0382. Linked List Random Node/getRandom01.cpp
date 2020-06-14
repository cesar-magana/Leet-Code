class Solution {
public:
    /** @param head The linked list's head.
        Note that the head is guaranteed to be not null, so it contains at least one node. */
    Solution(ListNode* head) {
        node = head;
    }
    
    /** Returns a random node's value. */
    int getRandom() {
        ListNode* mynode = node;
        int result = 0;
        int count = 0;
        while ( mynode ) {
            if (rand() % ++count == 0 ) {
                result = mynode->val;
            }
            mynode = mynode->next;
        }
        return result;
    }
private:
    ListNode* node;
};