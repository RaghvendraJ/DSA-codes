#include<stdio.h>
#include<string.h>
struct metro
{
    int age;
    int price;
    char source[20];
    char dest[20];
};
typedef struct metro NODE;
void display(NODE* ,int );
void search(NODE* ,int );
int main()
{
    int n;
    printf("enter the number of passengers\n");
    scanf("%d",&n);
    NODE* node;
    node=(NODE*)malloc(n*sizeof(NODE));
    for(int i=0;i<n;i++)
    {
        printf("enter the details of %d th passenger \n",i+1);
        printf("age,price,from and to station\n");
        scanf("%d",&(node+i)->age);
        scanf("%d",&(node+i)->price);
        scanf("%s",(node+i)->source);
        scanf("%s",(node+i)->dest);
    }
    display(node,n);
    search(node,n);
    return 0;
}
void display(NODE* node,int n)
{
    printf("\n");
    printf("the details of passengers \n");
    for(int i=0;i<n;i++)
    {
        printf("the details of %d th passenger is\n",i+1);
        printf("age is : %d\n",(node+i)->age);
        printf("cost of ticket is: %d\n",(node+i)->price);
        printf("from station is : %s\n",(node+i)->source);
        printf("to station is : %s\n",(node+i)->dest);
    }
}
void search(NODE* node,int n)
{
    char source1[20],dest1[20];
    printf("enter the from station\n");
    scanf("%s",source1);
    for(int i=0;i<n;i++)
    {
        if(strcmp(source1,(node+i)->source)==0)
        {
           printf("age is : %d\n",(node+i)->age);
           printf("cost of ticket is: %d\n",(node+i)->price);
           printf("from station is : %s\n",(node+i)->source);
           printf("to station is : %s\n",(node+i)->dest);
        }
    }
    printf("enter the to station\n");
    scanf("%s",dest1);
    for(int i=0;i<n;i++)
    {
        if(strcmp(dest1,(node+i)->dest)==0)
        {
           printf("age is : %d\n",(node+i)->age);
           printf("cost of ticket is: %d\n",(node+i)->price);
           printf("from station is : %s\n",(node+i)->source);
           printf("to station is : %s\n",(node+i)->dest);
        }
    }
}


