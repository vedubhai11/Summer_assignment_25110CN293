//max frequency of element in array
#include <stdio.h>
int main()
{
     int i,n;//taking array of size n
    printf("Enter number of elements or size of array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements:\n");//Taking the input in array
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max_element = arr[0];
    int max_count = 0;
    // Loop through each element to calculate its frequency
    for (int i = 0; i < n; i++)
    {
        int current_count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                current_count++;
            }
        }
        // If the current element's frequency is greater than the max_count found so far
        if (current_count > max_count)
        {
            max_count=current_count;
            max_element=arr[i];
        }
    }
    printf("Element with maximum frequency is: %d\n", max_element);
    printf("It appears %d times.\n",max_count);
    return 0;
}