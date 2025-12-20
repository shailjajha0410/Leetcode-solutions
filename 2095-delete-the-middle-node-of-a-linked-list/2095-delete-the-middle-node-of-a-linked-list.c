struct ListNode* deleteMiddle(struct ListNode* head) {
    if(head->next == NULL) return NULL;

    struct ListNode* fast = head;
    struct ListNode* slow = head;
    struct ListNode* prev = NULL;

    while(fast != NULL && fast->next != NULL){
        fast = fast->next->next;
        prev = slow;
        slow = slow->next;
    } 

    prev->next = slow->next;
    free(slow);

    return head;
}