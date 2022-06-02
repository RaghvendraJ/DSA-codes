/*
 * Complete the 'deleteNode' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
 * The function accepts following parameters:
 *  1. INTEGER_SINGLY_LINKED_LIST llist
 *  2. INTEGER position
 */
SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* llist, int pos) {
    SinglyLinkedListNode* cur,*temp;
    cur=llist;
    temp=llist;
    if(pos==0)
    {
        llist=temp->next;
        free(temp);
        return llist;
    }
    for(int i=0;i<pos;i++)
    {
        cur=temp;
        temp=temp->next;
    }
    cur->next=temp->next;
    free(temp);
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

