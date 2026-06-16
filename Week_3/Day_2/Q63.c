//find pair with given sum
#include<stdio.h>
int main()
{
int i,j,n,sum;
//taking array of size n
    printf("Enter number of elements or size of array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements:\n");//Taking the input in array
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
printf("enter target sum: ");
scanf("%d", &sum);
for(i=0;i<10;i++)
{
    for(j=i+1;j<10;j++)
    {
       if(a[i]+a[j]==sum)
       {
           printf("(%d, %d)\n", a[i],a[j]);
       }
    }
 }
}
