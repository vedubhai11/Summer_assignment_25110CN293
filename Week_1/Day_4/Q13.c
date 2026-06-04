//fibonaci series
#include<stdio.h>
int main()
{
    int n,nxtterm=0,t1=0,t2=1;
    printf("enter the no. of terms\n");
    scanf("%d",&n);
    printf("fibonacci series: ");
    while(nxtterm<=n)
    {
        printf("%d",nxtterm);
        t1=t2;
        t2=nxtterm;
        nxtterm=t1+t2;
    }
    return 0;
}