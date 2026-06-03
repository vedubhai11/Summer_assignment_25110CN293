//Prime Number
#include<stdio.h>
int main()
{
    int i,n,count=0;
    printf("enter a number to check\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
        count++;
        }
    }
    if(count==2)
    {
        printf("It is a prime Number");
    }
    else
    {
        printf("It is Not a prime Number");
    }
    return 0;
}