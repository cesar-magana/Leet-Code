ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    ListNode head;
    ListNode* curr = &head;
    while ( list1 && list2 ) {
        if ( list1->val < list2->val ) {
            curr->next = list1;
            list1 = list1->next;
        } else {
            curr->next = list2;
            list2 = list2->next;
        }
        curr = curr->next;
    }
    if ( list1 ) {
        while ( list1 ) {
            curr->next = list1;
            curr = curr->next;
            list1 = list1->next;
        }
    } else if ( list2 ) {
        while ( list2 ) {
            curr->next = list2;
            curr = curr->next;
            list2 = list2->next;
        }
    }

    return head.next;
}
