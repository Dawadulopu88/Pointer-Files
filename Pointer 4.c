#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Invalid number of elements.\n");
        return 1;
    }
    int arr[n];
    int *ptr = arr;
    int sum = 0;
    printf("Enter the array elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", ptr);
        sum += *ptr;
        ptr++;
    }
    printf("The sum of the elements is: %d\n", sum);
    return 0;
}

