#include <stdio.h>

void swap(int *firstNumber, int *secondNumber)
{
    int temp;

    temp = *firstNumber;
    *firstNumber = *secondNumber;
    *secondNumber = temp;
}

int main()
{
    int firstNumber, secondNumber;

    printf("Enter two numbers: ");
    scanf("%d%d", &firstNumber, &secondNumber);

    swap(&firstNumber, &secondNumber);

    printf("After Swapping:\n");
    printf("First Number = %d\n", firstNumber);
    printf("Second Number = %d", secondNumber);

    return 0;
}
