#include <stdio.h>
#include <ctype.h>

char convertToUpper(char character)
{
    return toupper(character);
}

int main()
{
    char character;

    printf("Enter a lowercase character: ");
    scanf(" %c", &character);

    printf("Uppercase Character = %c", convertToUpper(character));

    return 0;
}
