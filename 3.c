//3)	There is a company NI Infotech which has N number of employees working in it. NI Infotech gives bonus to its employees according to the following terms and conditions.
#include<stdio.h>
void bonus(int*,int);
void main()
{
    int n;
    printf("enter the number of employes\n");
    scanf("%d",&n);
    printf("enter the experience of the empolyee\n");
    int i,a[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    bonus(&a,n);
}

void bonus(int *a,int n)
{
    float bns,tot_sal;
    for(int i=0;i<n;i++)
    {
        if(a[i]>=5 && a[i]<=7)
        {
            bns=10*10600/100;
            tot_sal=10600+bns;
            printf("the salary is %f\n",tot_sal);
        }
        else if(a[i]>=8 && a[i]<=10)
        {
           bns=20*21300/100;
           tot_sal=21300+bns;
           printf("the salary is %f\n",tot_sal);
        }
        else if(a[i]>10)
        {
            bns=30*32100/100;
            tot_sal=32100+bns;
            printf("the salary is %f\n",tot_sal);
        }
        else
        {
            printf("experience less than 5 yrs!! NO BONUS!\n");
        }
    }
}
