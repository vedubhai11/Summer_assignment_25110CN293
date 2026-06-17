//intersection of arrayp
#include <stdio.h>
int main()
{
    int n1, n2,i,j,k;
    printf("Enter size of first array:\n");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter elements of first array:\n");
    for(i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    // take size of second array
    printf("Enter size of second array:\n");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter elements of second array:\n");
    for(i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    printf("Intersection of arrays:\n");// Find intersection
    for(i = 0; i < n1; i++)
    {
        for(j = 0; j < n2; j++)
        {
            if(arr1[i] == arr2[j])
            {
                // Check if already printed (to avoid duplicates)
                int alreadyPrinted = 0;
                for(k = 0; k < i; k++)
                {
                    if(arr1[i] == arr1[k])
                    {
                        alreadyPrinted = 1;
                        break;
                    }
                }
                if(!alreadyPrinted)
                {
                    printf("%d ", arr1[i]);
                }
                break;
            }
        }
    }
    return 0;
}
