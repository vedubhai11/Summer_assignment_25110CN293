//Factorial by recursion
#include<stdio.h>
#include<conio.h>
int factorial(int);
int main()
{
    int n,result;
    printf("Enter a number\n");
    scanf("%d",&n);
    result=factorial(n);
    printf("factorial=%d",result);
    getch();
    return 0;
}
int factorial(int n)
{
    int f;
    if(n==0)
    {
    return 1;
    }
    else
    {
    f=n*factorial(n-1);
    }
    return f;
    
}