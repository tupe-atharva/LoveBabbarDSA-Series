void reverseLL(node* &head){
    node *curr= head;
    node *prev = NULL;
    node *forward = NULL;
    
    while(curr != NULL){
        
        forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
    }
    head = prev; // as in the end the prev pointer points to head of the reversed LL.
}