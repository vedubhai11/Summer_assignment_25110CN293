//find missing number in the array
#include <stdio.h>
int MissingNumber(int arr[], int n)
{
    // numbers from 1 to n+1
    //one number is missing so the total numbers should be n + 1
    int total_numbers = n + 1;
    int expected_total=(total_numbers * (total_numbers + 1)) / 2;
    //sum of the elements in the array
    int actual_sum = 0;
    for (int i = 0; i < n; i++)
    {
        actual_sum += arr[i];
    }
    //for missing number
    return expected_total - actual_sum;
}
int main()
{
    //declaration and initialization
    int arr[] = {1, 2, 4, 5, 6}; 
    int n = sizeof(arr) / sizeof(arr[0]);
    int missing = MissingNumber(arr, n);
    printf("The missing number is: %d\n", missing);
    return 0;
}