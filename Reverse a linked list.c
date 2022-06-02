/*
 * Complete the 'reverse' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
 * The function accepts INTEGER_SINGLY_LINKED_LIST llist as parameter.
 */
SinglyLinkedListNode* reverse(SinglyLinkedListNode* llist )
{
        SinglyLinkedListNode *x,*y,*z;

    x=y=z=llist;
    x=x->next->next;
    y=y->next;
    z->next=NULL;
    y->next=z;

    while (x!=NULL)
    {
        z=y;
        y=x;
        x=x->next;
        y->next=z;
    }
    llist=y;
    return llist;
}
/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
