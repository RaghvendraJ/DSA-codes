#include<stdio.h>
#include<string.h>
struct player
{
    int odi_rank;
    char team_name[20];
    char player_name[20];
};
typedef struct player NODE;
void display(NODE* ,int ,FILE *);
void sort(NODE* ,int );
int main()
{
    FILE *ptr;
    int n;
    printf("enter the number of players details to be stored\n");
    scanf("%d",&n);
    NODE* p;
    p=(NODE*)malloc(n*sizeof(NODE));
    for(int i=0;i<n;i++)
    {
        printf("enter the details of %d th player \n",i+1);
        printf("odi rank,team name and player name\n");
        scanf("%d",&(p+i)->odi_rank);
        scanf("%s",(p+i)->team_name);
        scanf("%s",(p+i)->player_name);
    }
    display(p,n,ptr);
    sort(p,n);
    display(p,n,ptr);
    return 0;
}
void display(NODE* p,int n,FILE *ptr)
{
    ptr=(fopen("cricket.txt","w"));
    printf("\n");
    printf("the details of players is stored in respective file\n");
    printf("\n");
    for(int i=0;i<n;i++)
    {
        fprintf(ptr,"the details of %d th player is\n",i+1);
        fprintf(ptr,"odi rank of player is : %d\n",(p+i)->odi_rank);
        fprintf(ptr,"team name is : %s\n",(p+i)->team_name);
        fprintf(ptr,"player name is : %s\n",(p+i)->player_name);
    }
    fclose(ptr);
}
void sort(NODE* p,int n)
{
    NODE temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if((p+j)->odi_rank>(p+j+1)->odi_rank)
            {
                temp=*(p+j);
                *(p+j)=*(p+j+1);
                *(p+j+1)=temp;
            }
        }
    }
    printf("\n");
}
