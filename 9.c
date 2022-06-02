/*9)	C programming for problem solving is a course offered to first semester students of KLE Technological University. The course conducts POST TESTs to students for a maximum of 10 marks. Once all the POST TESTS are conducted, the marks scored by each student will be announced. Help the course teacher to do the followings.
i)	How many students scored EVEN marks?
ii)	How many students scored ODD marks?
iii)	Find, if any student scored 100% marks? Display appropriate message.*/
#include<stdio.h>
void marks(int*,int);
void main()
{
    int n;
    printf("enter the no of students\n");
    scanf("%d",&n);
    int a[n];
    printf("enter the marks obtained by student out of 10 in the test\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    marks(&a,n);
}

void marks(int *a,int n)
{
    int even=0,odd=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        if(a[i]==10)
        {
            printf("student %d has scored full marks\n",i+1);
        }
    }
    printf("students with even marks=%d\n",even);
    printf("students with odd marks=%d\n",odd);
}
