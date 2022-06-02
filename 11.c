/* 11)	Godrej constructed a new Apartment with N flats, in Hubballi. At the end of each month the Secretary of the apartment,
 collects the total units of electricity consumed by each flat.  As per the table given below, help Secretary to calculate the
  total bill_amt to be paid by each flat.

Units Consumed	Charges apply
0-100	1.5 Rs/Unit
101-250	2.3 Rs/Unit, for above 100 units
251-600	4.0 Rs/Unit, for above 250 units
Above 600	5.5 Rs/Unit, for above 600 units */
#include<stdio.h>
void bill_amt(float*,int );
void main()
{
    int n;
    printf("enter the no. of flats \n");
    scanf("%d",&n);
    float a[n];
    printf("electricity units consumed by the flat\n");
    for(int i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
    }
    bill_amt(&a,n);
}
void bill_amt(float *a,int n)
{
    float total_bill_amt;
    total_bill_amt=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>=0 && a[i]<=100)
        {
            total_bill_amt = 1.5 * a[i];
            printf("total bill_amt paid by the %d th flat is %f\n",i,total_bill_amt);
        }
        if(a[i]>=101 && a[i]<=250)
        {
            total_bill_amt = (2.3 * (a[i] - 100) ) + (1.5 * 100) ;
            printf("total bill_amt paid by the %d th flat is %f\n",i,total_bill_amt);
        }
        if(a[i]>=251 && a[i]<=600)
        {
            total_bill_amt = (4 * (a[i] - 250)) + (2.3 * 150) + (1.5*100);
            printf("total bill_amt paid by the %d th flat is %f\n",i,total_bill_amt);
        }
        if(a[i]>600)
        {
            total_bill_amt = (5.5 * (a[i] - 600) ) + (4 * 350) + (2.3 * 150) +(1.5*100);
            printf("total bill_amt paid by the %d th flat is %f\n",i,total_bill_amt);
        }
    }
}
