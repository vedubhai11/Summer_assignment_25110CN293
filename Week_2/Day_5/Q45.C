//check palindrome number by function
#include<stdio.h>
void palindrome(int n);//decleration of function prototype
int main()
{
int n;
printf("Enter a number\n");
scanf("%d",&n);
palindrome(n);
return 0;
}
void palindrome(int n)
{
    int r,rev=0,temp;
    temp=n;//store 'n' in another variable for further use 
    while(n!=0)
    {
        r=n%10;// conditions to check palindrome number
        rev=rev*10+r;
        n=n/10;
    }
    if(temp==rev)
    {
        printf("%d is a palindrome number",temp);
    }
    else
    {
        printf("%d is  not a palindrome number",temp);
    }
}