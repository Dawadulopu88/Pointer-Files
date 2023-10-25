#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Invalid number of elements.\n");
        return 1;
    }
    int arr[n];
    int *ptr = arr;
    printf("Enter the array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", ptr);
        ptr++;
    }
    printf("Array elements in reverse order:\n");
    ptr--;
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", *ptr);
        ptr--;
    }
    printf("\n");
    return 0;
}

