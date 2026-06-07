//reverse the number using recursion
#include<stdio.h>
int rev(int);
int main()
{
    int num,r;
    printf("Enter any number\n");
    scanf("%d",&num);
    r=rev(num);
    printf("Reverse of Number: %d",r);
    return 0;
}
int rev(int num)
{
    static int sum,r;
    if(num)
    {
        r=num%10;
        sum=sum*10+r;
         return rev(num/10);
    }
    else
    {
        return sum;
    }
}
