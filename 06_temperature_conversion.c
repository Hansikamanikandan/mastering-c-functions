#include <stdio.h>

float celsiusToFahrenheit(float celsius)
{
    return (celsius * 9 / 5) + 32;
}

float fahrenheitToCelsius(float fahrenheit)
{
    return (fahrenheit - 32) * 5 / 9;
}

int main()
{
    int choice;
    float temperature;

    printf("Temperature Conversion\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter temperature: ");
    scanf("%f", &temperature);

    switch(choice)
    {
        case 1:
            printf("Fahrenheit = %.2f", celsiusToFahrenheit(temperature));
            break;

        case 2:
            printf("Celsius = %.2f", fahrenheitToCelsius(temperature));
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}
