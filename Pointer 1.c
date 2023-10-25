#include <stdio.h>

int main()
{
    int x, y, p;
    int *a, *b, *a_b;
    printf("Enter first number: ");
    scanf("%d", &x);
    printf("Enter second number: ");
    scanf("%d", &y);
    a = &x;
    b = &y;
    a_b = &p;
    *a_b = (*a) * (*b);
    printf("The product of %d and %d is: %d\n", *a, *b, *a_b);
    return 0;
}
