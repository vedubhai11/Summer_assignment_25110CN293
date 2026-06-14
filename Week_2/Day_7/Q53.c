//Linear search 
#include<stdio.h>
int main()
{
    int i,arr[10],num,k;//size of array is taken 10 and defined by user
    printf("Enter Numbers in a array:\n");//Taking the input
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the Number to search\n");
    scanf("%d",&num);
    for(i=0;i<10;i++)
    {
        if(arr[i]==num)//if number is present then k=1 which further fulfill the condition
        {
            k=1;
            break;
        }
    }
    if(k==1)
    {
        printf("Location of %d is found",num);
    }
    else
    {
        printf("Location of %d is not found",num);
    }
    return 0;
}