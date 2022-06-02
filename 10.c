/*10)	Ashish is studying in 3RD standard in KENDRIYA VIDYALA, Hubballi.  He is writing the Mathematics Test in the school.
 One of the questions was to find the PRIME NUMBERS among a set of N numbers. Help Ashish to find the PRIME numbers.*/
 #include<stdio.h>
 void prime(int*,int);
 void main()
 {
     int n;
     printf("enter the size\n");
     scanf("%d",&n);
     printf("enter the number\n");
     int a[n];
     for(int i=0;i<n;i++)
     {
         scanf("%d",&a[i]);
     }
     prime(&a,n);
 }
 void prime(int *a,int n)
 {
     int x=0,i,j;
     for(i=0;i<n;i++)
     {
         for(j=2;j<a[i];j++)
         {
             if(a[i]%j==0)
             {
                 x=1;
             }
         }
         if(a[i]==1)
         {
             printf("%d is neither prime nor composite\n");
         }
         if(x==0&&a[i]!=1)
         {
             printf("%d is prime\n",a[i]);
         }
         else if(x==1)
         {
             printf("%d is not prime",a[i]);
         }
         x=0;
     }
 }

