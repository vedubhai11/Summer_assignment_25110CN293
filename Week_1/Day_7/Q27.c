// Sum of digit by recursion
#include<stdio.h>
int summ(int n);
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    printf("Sum of digits in %d is %d",n,summ(n));
    return 0;
}
int summ(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        //use %10 to take last digit and add it to the recursive call
    return (n%10)+summ(n/10);
    }
}
