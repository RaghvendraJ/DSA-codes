//2)   Read an array of n numbers. Input the number from keyboard (consider it as a key number) and check whether the key number is present in the array or not, also display the index at which the key number is present.
#include<stdio.h>
void check(int,int*,int);
void main()
{
    int n;
    printf("enter the size\n");
    scanf("%d",&n);
    printf("enter the elements\n");
    int i,j,a[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("the elements are:\n");
    for(j=0;j<n;j++)
    {
        printf("%d ",a[j]);
    }
    printf("\n");
    int k;
    printf("enter the key number\n");
    scanf("%d",&k);
    check(k,&a,n);
}

void check(int k,int *a,int n)
 {
     int i;
     int x=0;
     for(i=0;i<n;i++)
      {
         if(a[i]==k)
         {
            x=1;
            break;
         }
      }
      if(x==1)
      {
          printf("the number is present and is at: %d",i+1);
      }
      else
      {
          printf("the number is not present!");
      }
 }
