//nth term of fibonacci series
#include <stdio.h>
int fib(int n)
{
int t1 = 0, t2 = 1, nxtterm, i;
if (n == 0)
{
return t1;
}
for (i = 2; i <= n; i++)
{
nxtterm = t1 + t2;
t1 = t2;
t2 = nxtterm;
}
return t2;
}
int main()
{
int n;
printf("Enter n: ");
scanf("%d", &n);
printf("%dth Fibonacci number is %d\n", n, fib(n));
return 0;
}
