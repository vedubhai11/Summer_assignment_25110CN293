//duplicate in array
#include<stdio.h>
int main()
{
    int i,j,arr[10],temp;//size of array is taken 10 and defined by user
    printf("Enter Numbers in a array:\n");//Taking the input
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Duplicates element in the array:\n");
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            temp=arr[i];// store in temperory variable
            if(arr[i]==arr[j] && arr[i]!=NULL) //check the condition 
            {
                arr[i]=NULL;
                printf("%d\n",temp);
            }
            else if(temp==arr[j])1
            {
                arr[j]=NULL;
            }
        }
    }
    return 0;
}