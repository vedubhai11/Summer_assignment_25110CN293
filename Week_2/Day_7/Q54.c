//Freqquency of an element
#include<stdio.h>
int main()
{
    int i,arr[10],freq,k;//size of array is taken 10 and defined by user
    printf("Enter Numbers in a array:\n");//Taking the input
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the Number to search\n");
    scanf("%d",&k);
    for(i=0;i<10;i++)
    {
        if(arr[i]==k)
        {
            freq=freq+1;//increase value by 1 if number is repeated
        }
    }
    printf("Frequency of %d is %d",k,freq);
    return 0;
}
