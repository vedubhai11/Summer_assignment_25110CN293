
//For Palindrome number
#include <stdio.h>
int main()
{
    int n,rev=0,rem,p;
    printf("Enter a Number:");
    scanf("%d",&n);
    p=n;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
if(rev==p)
{
    printf("The number is a palindrome.");
}
else
{
    printf("The number is not a palindrome.");
}
    return 0;
}