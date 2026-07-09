#include <stdio.h>

float add(float a, float b)
{
    return a + b;
}

float subtract(float a, float b)
{
    return a - b;
}

float multiply(float a, float b)
{
    return a * b;
}

float divide(float a, float b)
{
    return a / b;
}

int main()
{
    int choice;
    float firstNumber, secondNumber;

    printf("Enter two numbers: ");
    scanf("%f%f", &firstNumber, &secondNumber);

    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Result = %.2f", add(firstNumber, secondNumber));
            break;

        case 2:
            printf("Result = %.2f", subtract(firstNumber, secondNumber));
            break;

        case 3:
            printf("Result = %.2f", multiply(firstNumber, secondNumber));
            break;

        case 4:
            if(secondNumber != 0)
                printf("Result = %.2f", divide(firstNumber, secondNumber));
            else
                printf("Division by zero is not allowed.");
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}
