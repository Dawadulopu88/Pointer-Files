#include <stdio.h>

int main()
{
    int x, y, min;
    int *a, *b, *p_min;
    printf("Enter first number: ");
    scanf("%d", &x);
    printf("Enter second number: ");
    scanf("%d", &y);
    a = &x;
    b = &y;
    p_min = &min;
    if (*a < *b)
    {
        *p_min = *a;
    }
    else
    {
        *p_min = *b;
    }
    printf("The minimum number between %d and %d is: %d\n", *a, *b, *p_min);
    return 0;
}
