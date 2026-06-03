#include<stdio.h>
int main()
{
    int m,n,lcm;
    printf("Enter two numbers\n");
    scanf("%d%d",&n,&m);
    if(m>n)
    {
        lcm=m;
    }
    else
    {
        lcm=n;
    }
    while(1)
    {
        if(lcm%m==0 && lcm%n==0)
        {
            printf("\nLCM of %d and %d is %d",m,n,lcm);
            break;
        }
        lcm++;
    }
    return 0;
}