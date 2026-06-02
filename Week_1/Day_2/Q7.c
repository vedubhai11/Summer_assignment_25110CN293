//product of the entered digit
#include<stdio.h>
int main()/*  */
{
    int n,product=1,rem;
    printf("Enter a Number\n");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        product=product*rem;
        n=n/10;
    }
    printf("Sum of the digit=%d",product);
    return 0;
}