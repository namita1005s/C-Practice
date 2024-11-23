#include <stdio.h>

int main()
{
    int n, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &n, &y);

    n > y 
        ? printf("The greater number is %d.\n", n) 
        : printf("The greater number is %d.\n", y);

    return 0; // Indicating successful execution
}
