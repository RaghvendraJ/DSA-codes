#include<stdio.h>
#include<string.h>
struct movie
{
    int year;
    char director[20];
    char phouse[20];
};
typedef struct movie NODE;
void display(NODE* ,int );
void search(NODE* ,int );
void sort(NODE* ,int );
int main()
{
    int n;
    printf("enter the number of movies details to be stored\n");
    scanf("%d",&n);
    NODE* node;
    node=(NODE*)malloc(n*sizeof(NODE));
    for(int i=0;i<n;i++)
    {
        printf("enter the details of %d th movie \n",i+1);
        printf("year,director name and production house\n");
        scanf("%d",&(node+i)->year);
        scanf("%s",(node+i)->director);
        scanf("%s",(node+i)->phouse);
    }
    display(node,n);
    sort(node,n);
    search(node,n);
    return 0;
}
void display(NODE* node,int n)
{
    printf("\n");
    printf("the details of movies \n");
    for(int i=0;i<n;i++)
    {
        printf("the details of %d th movie is\n",i+1);
        printf("year released is : %d\n",(node+i)->year);
        printf("director name is : %s\n",(node+i)->director);
        printf("production house is : %s\n",(node+i)->phouse);
        printf("\n");
    }
}
void sort(NODE* node,int n)
{
    NODE temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if((node+j)->year>(node+j+1)->year)
            {
                temp=*(node+j);
                *(node+j)=*(node+j+1);
                *(node+j+1)=temp;
            }
        }
    }
    printf("the movie details after sorting\n");
    display(node,n);
}
void search(NODE* node,int n)
{
    char name[20],house[20];
    printf("enter the director name required\n");
    scanf("%s",name);
    for(int i=0;i<n;i++)
    {
        if(strcmp(name,(node+i)->director)==0)
        {
            printf("\n");
            printf("year released is : %d\n",(node+i)->year);
            printf("director name is : %s\n",(node+i)->director);
            printf("production house is : %s\n",(node+i)->phouse);
        }
    }
    printf("enter the production house\n");
    scanf("%s",house);
    for(int i=0;i<n;i++)
    {
        if(strcmp(house,(node+i)->phouse)==0)
        {
            printf("\n");
            printf("year released is : %d\n",(node+i)->year);
            printf("director name is : %s\n",(node+i)->director);
            printf("production house is : %s\n",(node+i)->phouse);
        }
    }
}



