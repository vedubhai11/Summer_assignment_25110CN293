//fibonacci series by function
#include <stdio.h>
// Function Prototype 
void fibonacci(int n);
int main()
{
    int n;
    printf("Enter the number\n");
    if (scanf("%d", &n) != 1) return 1; 
    printf("Fibonacci series\n");
    fibonacci(n);
    return 0;
}
void fibonacci(int n)
{
    int i, n1 = 0, n2 = 1, n3;
    for (i = 0; i < n; i++)
    {
        if (i <= 1)
        {
            printf("%d\n", i);
        }
        else
        {
            n3 = n1 + n2;
            printf("%d\n", n3);
            n1 = n2;
            n2 = n3;
        }
    }
}