//Armstrong Range
#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,num,rem,sum,temp;
    printf("enter starting number and ending number of range to print armstrong number range\n");
    scanf("%d%d",&n,&m);
    for(num=n;num<=m;num++)
    {
        temp=num;
        sum=0;
        while (temp!=0)
        {
            rem=temp%10;
            sum=sum+rem*rem*rem;
            temp=temp/10;
        }
        if(sum==num)
        printf("Armstrong range=%d\n",num);
    }
    return 0;
}