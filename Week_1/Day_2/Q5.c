//sum of the entered digit
#include<stdio.h>
int main()
{
    int n,sum=0,rem;
    printf("Enter a Number\n");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("Sum of the digit=%d",sum);
    return 0;
}