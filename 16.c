//16)	Write a modular C program to reverse an array.
#include<stdio.h>
void rev(int,int*);
void main()
{
    int x;
    printf("enter the size\n");
    scanf("%d",&x);
    int n[x],i;
    for(i=0;i<x;i++)
    {
        scanf("%d",&n[i]);
    }
    rev(x,&n);
}

void rev(int x,int *n)
{
    for(int i=x-1;i>=0;i--)
    {
        printf("%d ",n[i]);
    }
}
