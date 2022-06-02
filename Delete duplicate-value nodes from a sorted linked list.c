/*
 * Complete the 'removeDuplicates' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
 * The function accepts INTEGER_SINGLY_LINKED_LIST llist as parameter.
 */

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* llist)
{
      SinglyLinkedListNode *cur,*pre,*temp;
    cur=llist;
    while(cur!=NULL&&cur->next!=NULL)
    {
        pre=cur;
        while(pre->next!=NULL)
        {
          if((cur->data)==(pre->next->data))
         {
           temp=pre->next;
              pre->next=pre->next->next;
           free(temp);
          }
            else
            {
                pre=pre->next;
            }
        }
        cur=cur->next;
    }
    return llist;
}
