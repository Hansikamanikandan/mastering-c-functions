#include <stdio.h>

void swap(int firstNumber, int secondNumber)
{
    int temp;

    temp = firstNumber;
    firstNumber = secondNumber;
    secondNumber = temp;

    printf("\nInside Function:\n");
    printf("First Number = %d\n", firstNumber);
    printf("Second Number = %d\n", secondNumber);
}

int main()
{
    int firstNumber, secondNumber;

    printf("Enter two numbers: ");
    scanf("%d%d", &firstNumber, &secondNumber);

    swap(firstNumber, secondNumber);

    printf("\nAfter Function Call:\n");
    printf("First Number = %d\n", firstNumber);
    printf("Second Number = %d", secondNumber);

    return 0;
}
