//union of array
#include <stdio.h>
int main()
{
    int n1, n2, i, j, k = 0, duplicate;
    printf("Enter the number of elements in the first array:\n");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter %d elements for the first array:\n", n1);
    for(i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("\nEnter the number of elements in the second array\n");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter %d elements for the second array:\n", n2);
    for(i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    int unionArr[n1 + n2];//array to hold all elements 
    for(i = 0; i < n1; i++)//Copy all elements of the first array to the union array
    {
        unionArr[k++] = arr1[i];
    }
    for(i = 0; i < n2; i++)//Copy elements of the second array only if they aren't already in the union array
    {
        duplicate = 0;
        for(j = 0; j < k; j++)
        {
            if(arr2[i] == unionArr[j])
            {
                duplicate = 1;
                break;
            }
        }
        //If it's a unique element,add it to the union array
        if(!duplicate)
        {
            unionArr[k++] = arr2[i];
        }
    }
    printf("\nThe Union of the two arrays is:\n");//Print the final union array
    for(i = 0; i < k; i++)
    {
        printf("%d ", unionArr[i]);
    }
    printf("\n");
    return 0;
}