#include <stdio.h> // For printf and scanf

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n > 0)
    {
        printf("The number is positive.\n");
    }

    if (n < 0)
    {
        printf("The number is negative.\n");
    }

    if (n == 0)
    {
        printf("The number is zero.\n");
    }

    return 0; // Indicating successful execution
}
