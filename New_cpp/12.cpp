#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int length, i;
    char password[50];

    // Seed random number generator
    srand(time(0));

    printf("RANDOM PASSWORD GENERATOR\\n");
    printf("Enter password length (max 50): ");
    scanf("%d", &length);

    if (length <= 0 || length > 50)
    {
        printf("Invalid length!\\n");
        return 1;
    }

    printf("Generated password: ");

    for (i = 0; i < length; i++)
    {
        int char_type = rand() % 3;

        if (char_type == 0)
        {
            // Uppercase letter (ASCII 65-90)
            password[i] = rand() % 26 + 65;
        }
        else if (char_type == 1)
        {
            // Lowercase letter (ASCII 97-122)
            password[i] = rand() % 26 + 97;
        }
        else
        {
            // Digit (ASCII 48-57)
            password[i] = rand() % 10 + 48;
        }

        printf("%c", password[i]);
    }

    printf("\\n");

    return 0;
}