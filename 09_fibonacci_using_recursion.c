#include <stdio.h>

int fibonacci(int number)
{
    if(number == 0)
        return 0;

    if(number == 1)
        return 1;

    return fibonacci(number - 1) + fibonacci(number - 2);
}

int main()
{
    int number, i;

    printf("Enter the number of terms: ");
    scanf("%d", &number);

    printf("Fibonacci Series:\n");

    for(i = 0; i < number; i++)
    {
        printf("%d ", fibonacci(i));
    }

    return 0;
}
