/*8)	A middle class family would always like to spend the money wisely, because of their financial status. They can’t afford to purchase the luxurious items unlike the Rich Class family. Even if they do, they do it very occasionally.  In order to keep track of the expenditure of the entire year, the middle class family maintains a record of how much they spent every month of that year.
Assume that for the year 2020, the family maintains a record of expenditure for each month. At the end of the year, the family would like to know followings about their expenditure.
i)	Which month of the year they spent more (display month number)
ii)	Which month of the year they spent less(display month number)
iii)	Which are the months they spent more than 35000 rupees?(display month number)
iv)	Calculate the average expenditure of the family for the year.*/
#include<stdio.h>
void spent(int*);
void main()
{
    int a[12];
    printf("enter the money spent in each month\n");
    for(int i=0;i<12;i++)
    {
        scanf("%d",&a[i]);
    }
    spent(&a);
}

void spent(int *a)
{
    float average;
    int sum=0,max,min;
    for(int i=0;i<12;i++)
    {

        if(a[i]>a[0])
        {
            max=i;
        }
        if(a[i]<a[1])
        {
            min=i;
        }
        if(a[i]>35000)
        {
            printf("money in %d month is over 35000\n",i+1);
        }
        sum=sum+a[i];
    }
    average= sum / 12 ;
    printf("the average money spent is %f\n",average);
    printf("month of the year they spent more is %d\n",max+1);
    printf("month of the year they spent less is %d\n",min+1);
}
