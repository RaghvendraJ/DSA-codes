// Complete the insertNodeAtTail function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data)
{
   SinglyLinkedListNode *newnode,*temp;
    newnode=(struct SinglyLinkedListNode*)malloc(sizeof(struct SinglyLinkedListNode));
    if(head==NULL)
    {
        head=newnode;
        newnode->next=NULL;
        newnode->data=data;
        return head;
    }
    else
    {
        temp=head;
         while(temp->next!=NULL)
         {
             temp=temp->next;
         }
        temp->next=newnode;
        newnode->next=NULL;
        newnode->data=data;
        return head;
    }

}
