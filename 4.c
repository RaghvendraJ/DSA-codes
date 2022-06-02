//4)	In a class there are 10 students. Course teacher of “DS with Applications ” wants to calculate the class average and also count total number of students who scored above and below class average. Most of the students IQ is very high. Help course teacher to solve the above problem.
#include<stdio.h>
void student(int *);
void main()
{
    int a[10],n;
    printf("enter the marks of 10 students\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
     student(&a);
}

void student(int *a)
{
    int k=0;
    for(int i=0;i<10;i++)
    {
        k=k+a[i];
    }
    float average=k/10;
    printf("the class average is %f\n",average);
    int x=0,y=0;
    for(int i=0;i<10;i++)
    {
        if(a[i]<average)
        {
            x++;
        }
        else
        {
            y++;
        }
    }
    printf("the students below average is %d\n",x);
    printf("the students above average is %d",y);
}
