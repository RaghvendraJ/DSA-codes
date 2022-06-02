
/*
 * Complete the 'insertNodeAtPosition' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
 * The function accepts following parameters:
 *  1. INTEGER_SINGLY_LINKED_LIST llist
 *  2. INTEGER data
 *  3. INTEGER position
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

SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position)
{
    SinglyLinkedListNode *newnode,*temp;
    newnode=(struct SinglyLinkedListNode*)malloc(sizeof(struct SinglyLinkedListNode));
    if(llist==NULL)
    {
        llist=newnode;
        newnode->next=NULL;
        newnode->data=data;
        return llist;
    }
    else
    {
         scanf("%d",&position);
        temp=llist;
        for(int i=0;i<position-1;i++)
        {
            temp=temp->next;
        }
        newnode->next=temp->next;
        temp->next=newnode;
        newnode->data=data;
        return llist;
    }
}
