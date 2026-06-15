//moves zeros to end
#include <stdio.h>
void zeroesToend(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[count++] = arr[i]; //Place non-zero element at starting
        }
    }
    // Fill remaining positions with zero
    while (count < n)
    {
        arr[count++] = 0;
    }
}
int main()
{
    int n,i;
    printf("Enter number of elements:\n");
    scanf("%d", &n);
    int arr[n]; // Variable length array
    printf("Enter %d elements:\n", n);
    for (i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    zeroesToend(arr, n);
    printf("Array after moving zeroes to end:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
