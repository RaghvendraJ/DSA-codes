// Complete the insertNodeAtHead function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data)
{
    SinglyLinkedListNode* newnode;
    newnode=(struct SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));
    if(llist==NULL)
    {
        llist=newnode;
        newnode->next=NULL;
        newnode->data=data;
        return llist;
    }
    else{
        newnode->next=llist;
        llist=newnode;
        newnode->data=data;
        return llist;
    }



}// Complete the insertNodeAtHead function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data)
{
    SinglyLinkedListNode* newnode;
    newnode=(struct SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));
    if(llist==NULL)
    {
        llist=newnode;
        newnode->next=NULL;
        newnode->data=data;
        return llist;
    }
    else{
        newnode->next=llist;
        llist=newnode;
        newnode->data=data;
        return llist;
    }



}
