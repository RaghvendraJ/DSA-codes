//1)	Read an array of numbers with size n and count frequency of positive/negative numbers
#include<stdio.h>
int read_array(int);
void main()

{
    int n,pos,neg;
    printf("enter the size of array:\n");
    scanf("%d",&n);
    read_array(n);
}
int read_array(int n)
{
    int pos,neg=0;
    int i,a[n];
    printf("enter the elements\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>=0)
    {
        pos++;
    }
    else
        {
            neg++;
        }
    }
    for (i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
        printf("the number of positive numbers is:%d\n",pos);
        printf("the number of negative numbers is:%d",neg);
}
