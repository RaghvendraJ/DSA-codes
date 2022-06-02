/*7)	Income tax department will collect the tax from the tax payers all around the Nation. For the financial year 2019-20, assume that the Income tax department has collected the tax from N number of tax payers. Help the Income tax department to do the followings.

i)	Calculate the total number of tax payers who paid tax more than 2.5lakhs.
ii)	Calculate the total number of tax payers who paid tax between 50000 rupees to 150000rupees.
iii)	Calculated the average tax collected.*/
#include<stdio.h>
void count(int[],int);
void main()
{
    int n;
    printf("enter the size\n");
    scanf("%d",&n);
    int a[n],i;
    int sum=0;
       float avg;
       printf("enter the tax paid\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
       sum=a[i]+sum;
          sum++;
    }
           avg=(float)sum/n;
           printf("the sum and average is=%d   %.2f\n",sum,avg);
    count(a,n);
}
   void count(int a[],int n)
   {
       int A=0,B=0;
       for(int i=0;i<n;i++)
       {
           if(a[i]>250000)
           {
               A++;
           }
           else if(a[i]>50000 && a[i]<150000)
           {
               B++;
           }
       }
       printf("above 2.5L and between(50K to 1.5L)=%d   %d",A,B);

   }
