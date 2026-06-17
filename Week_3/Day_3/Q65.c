//merging two arrays
#include <stdio.h>
int main()
{
    int n1, n2;
    int i, j;
    printf("Enter number of elements or size of array first:\n");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter elements in first array:\n");
    for(i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter number of elements or size of array second:\n");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter elements in second array:\n");
    for(j = 0; j < n2; j++)
    {
        scanf("%d", &arr2[j]);
    }
    int merged[n1 + n2];
    //Copy elements of arr1
    for (i = 0; i < n1; i++)
    {
        merged[i] = arr1[i];
    }
    //Copy elements of arr2  
    for (j = 0; j < n2; j++)
    {
        merged[n1 + j] = arr2[j]; 
    }

    //Print merged array
    printf("Merged array:\n");
    for (int k = 0; k < n1 + n2; k++)
    {
        printf("%d ", merged[k]);
    }
    printf("\n");
    return 0;
}