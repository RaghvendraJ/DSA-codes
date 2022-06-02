/*6)	KLE Technological University is a well know university for its academic excellence and Innovations. Top ranked students, always prefer the University for their Graduation in BE. Assume that for the year 2020-21 there are N students admitted to the university for the 1st year. Help University to do the followings.
i)	Read the rankings of N students.
ii)	Arrange the rankings in ascending order.
iii)	Display the highest and lowest ranks of students.*/
#include<stdio.h>
void rank(int*,int);
void main()
{
    int n;
    printf("enter the no of students\n");
    scanf("%d",&n);
    int a[n],i;
    printf("enter the ranks of students\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    rank(&a,n);
}

void rank(int *a,int n)
{
    int i,j,min;
    for(j=0;j<n;j++)
    {  min=j;
        for(i=j;j<n;i++)
        {
            if(a[i]<a[min])
            {
                min=i;
            }
        }
    }
    printf("the ranks are\n");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    printf("the max rank is %d\n",a[n-1]);
    printf("the min rank is %d\n",a[0]);
}
