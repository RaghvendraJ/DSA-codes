#include<stdio.h>

struct apple
{
   int wgt;
   struct apple *next;
};typedef struct apple *NODE;

NODE getnode();
NODE insert(NODE);
void display(NODE);
void select();

void main()
{
    NODE head=NULL;
    int n,wgt;
    printf("enter the number of apples\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
      head=insert(head);
    }
    display(head);
    select(head);
}
NODE getnode()
{
    NODE newnode;
    int wgt;
    newnode=malloc(sizeof(struct apple));
    if(newnode==NULL)
    {
        printf("memory not created\n");
        exit(0);
    }
    printf("enter the weight of apple\n");
    scanf("%d",&newnode->wgt);
    newnode->next=NULL;
    return newnode;
}

NODE insert(NODE head)
{
    NODE newnode,temp;
    newnode=getnode();
    if(head==NULL)
    {
        head=newnode;
        return head;
    }
    else
    {  temp=head;
        while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
         return head;
    }
}
void display(NODE head)
{
    NODE temp;
    if(head==NULL)
    {
        printf("empty list\n");
        return NULL;
    }
        temp=head;
        while(temp!=NULL)
    {
        printf("%d ",temp->wgt);
        temp=temp->next;
    }
}
void select(NODE head)
{
        NODE temp;
    temp=head;
     int sum;
     printf("\nSELECTED APPLES ARE:\n ");
    while(temp->next!=NULL)
    {
    if((((temp->wgt)%2==0 || (temp->wgt)%5==0)) && (temp->next->wgt)%3==0)
    {
        printf("%d\n",temp->wgt);
        sum=sum + temp->wgt;
    }

        temp=temp->next;
    }
        if (temp->wgt %2 ==0 || temp->wgt%5==0 )
        {
            printf("%d\n",temp->wgt);
            sum=sum+temp->wgt;
        }
      printf("total weight=%d\n",sum);
     return head;
}
