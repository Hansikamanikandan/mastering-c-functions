
#include <stdio.h>

void updateValues(int *firstNumber, int *secondNumber)
{
    *firstNumber = (*firstNumber) * 2;
    *secondNumber = (*secondNumber) * 3;
}

int main()
{
    int firstNumber, secondNumber;

    printf("Enter two numbers: ");
    scanf("%d%d", &firstNumber, &secondNumber);

    updateValues(&firstNumber, &secondNumber);

    printf("Updated First Number = %d\n", firstNumber);
    printf("Updated Second Number = %d", secondNumber);

    return 0;
}
