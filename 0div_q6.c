#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct game
{
    int data;
    struct game *next;
}*node;

node push(node top,int num)
{
    node newnode=(node)malloc(sizeof(struct game));
    if(newnode==NULL)
    {
        printf("memoryless");
        exit(0);
    }
    newnode->data=num;
    if(top==NULL)
        newnode->next=NULL;
    else
        newnode->next=top;
    return newnode;
}

node pop(node top)
{
    if(top==NULL)
    {
        printf("underflow");
    }
    else
    {
        node temp=top;
        top=top->next;
        free(temp);
    }
    return top;
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    node top1=NULL,top2=NULL;
    int n,num;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num);
        top1=push(top1,num);
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num);
        top2=push(top2,num);
    }
    int num1,num2;
    node cur1=top1,cur2=top2;
    while(cur1!=NULL&&cur2!=NULL)
    {
        num1=cur1->data;
        num2=cur2->data;
        if(num1>num2)
        {
            printf("1 ");
            cur2=pop(cur2);
        }
        if(num1<num2)
        {
            printf("2 ");
            cur1=pop(cur1);
        }
        if(num1==num2)
        {
            printf("0 ");
            cur1=pop(cur1);
            cur2=pop(cur2);
        }
    }
    return 0;
}
