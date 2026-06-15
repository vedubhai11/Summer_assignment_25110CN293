//reverse array
#include<stdio.h>
int main()
{
    int i,arr[10];//size of array is taken 10 and defined by user
    printf("Enter  10 Numbers in array:\n");//Taking the input
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Reverse elements in array:\n");
    for(i=9;i>=0;i--)//start loop reverse
    {
        printf("%d",arr[i]);
    }
    return 0;
}