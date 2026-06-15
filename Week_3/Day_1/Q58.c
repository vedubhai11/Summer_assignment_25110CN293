//Rotate  array  to left program
#include <stdio.h>
int main()
{
    int arr[5];
    int n=5,i, first;
    //Taking input 
    printf("Enter 5 Numbers in array:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    first = arr[0];
    //Shift elements to the left
    for(i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    //Move the first element to the very end before loop
    arr[n - 1] = first;
    //Print the rotated array
    printf("After Left Rotate: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}