/*5)	KLE Technological University is a well know university for its academic excellence and Innovations. It provides a well structured LIBRARY facility for its students. Students can avail book facility of the LIBRARY. A student can take a book for a period of maximum of 15 days.  If returned after the deadline, a student has to pay penalty of Rs 2.0/day.
In the month of January 2021, there are N students who returned the book late. For each student, read the number of days after the deadline, he/she is returning the book. calculate the followings.
i)	Calculate the average penalty collected.
ii)	Calculate the Maximum penalty paid by a student.
iii)	Calculate the minimum penalty paid by a student.
iv)	Calculate the total penalty collected.*/
#include<stdio.h>
void late(int*,int);
void main()
{
    int n;
    printf("enter the no of students\n");
    scanf("%d",&n);
    printf("enter the no of days the student gave the book after deadline\n");
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    late(&a,n);
}

void late(int *a,int n)
{
    int day=0,tot_amt;
    for(int i=0;i<n;i++)
    {
        day=day+a[i];
    }
    tot_amt=day*2;
    float average=tot_amt/n;
    printf("the total amount=%d\n",tot_amt);
    printf("the average amount=%f\n",average);
    int max=a[0],min=a[1];
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    int max_rs=max*2;
    int min_rs=min*2;
    printf("the max amt=%d\n",max_rs);
    printf("the min amt=%d\n",min_rs);
}
