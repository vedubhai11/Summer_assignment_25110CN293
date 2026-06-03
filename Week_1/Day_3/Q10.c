// prime number btw a range
#include<stdio.h>
int main()
{
    int i,n,j,m,count;
    printf("enter starting number\n");
    scanf("%d",&n);
    printf("enter ending number\n");
    scanf("%d",&m);
    for(i=n;i<=m;i++)
    {
        count=0;//for reset every time
        for(j=1;j<=i;j++)
        {
        if(i%j==0)
        {
        count++;
        }
        }
    if(count==2)
    {
        printf("prime Number=%d\n",i);
    }
}
    return 0;
}