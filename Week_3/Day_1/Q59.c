//Rotate  array  to RIGHT program
#include <stdio.h>
int main()
{
    int arr[5];
    int n = 5, i, last;
    //Taking input
    printf("Enter 5 Numbers in array:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    //Store last element
    last = arr[n - 1];
    //Shift elements to the right
    for(i = n - 1; i > 0; i--)// start backword loop
    {
        arr[i] = arr[i - 1];
    }
    //Move the last element to the STARTING
    arr[0] = last;
    //Print the rotated array
    printf("After Right Rotate: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}