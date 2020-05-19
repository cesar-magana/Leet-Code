    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode prehead(INT_MIN);
        ListNode* prev = &prehead;
        
        while ( l1 && l2 ) {
            if ( l1->val <= l2->val ) {
                prev->next = l1;
                l1 = l1->next;
            } else {
                prev->next = l2;
                l2 = l2->next;
            }
            prev = prev->next;
        }
        prev->next = l1 ? l1 : l2;
        return prehead.next;
    }
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* result = NULL;
        for ( int i=0; i<lists.size(); i++ ) {
            result = mergeTwoLists(result, lists[i]);
        }
        return result;
    }