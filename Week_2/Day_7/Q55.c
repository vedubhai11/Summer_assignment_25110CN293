//2nd larget  element in array
#include<stdio.h>
int main()
{
    //m1 and m2 are maximunms
    int i,arr[10],m1=0,m2=0;//size of array is taken 10 and defined by user
    printf("Enter Numbers in a array:\n");//Taking the input
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++)
    {
        if(arr[i]>m1)
        {
            m2=m1;
            m1=arr[i];
        }
        else if (arr[i]>m2 && arr[i]<m1)
        {
            m2=arr[i];
        }
    }
    printf("Second largest element of array is %d",m2);
    return 0;
}
        
