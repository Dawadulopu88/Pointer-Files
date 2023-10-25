#include <stdio.h>
int main()
{
    int n;
    int r = 1;
    int *p_resullt = &r;
    printf("Enter a nber: ");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("Factorial of a negative nber is not defined.\n");
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            *p_resullt *= i;
        }

        printf("The factorial of %d is %d\n", n, *p_resullt);
    }

    return 0;
}
