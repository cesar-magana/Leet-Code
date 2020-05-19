ListNode* mergeTwoLists(ListNode* headA, ListNode* headB) {
    if ( !headA ) return headB;
    if ( !headB ) return headA;

    if ( headA->val < headB->val ) {
        headA->next = mergeTwoLists( headA->next,headB );
        return headA;
    }
    else {
        headB->next = mergeTwoLists( headB->next,headA );
        return headB;
    }
}