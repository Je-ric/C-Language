#include <stdio.h>

int main()
{
    int choice;
    int hours, minutes, seconds, total_seconds;

    printf("TIME CONVERTER\\n");
    printf("1. Hours/Minutes/Seconds to Total Seconds\\n");
    printf("2. Total Seconds to Hours/Minutes/Seconds\\n");
    printf("Enter your choice (1/2): ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Enter hours: ");
        scanf("%d", &hours);
        printf("Enter minutes: ");
        scanf("%d", &minutes);
        printf("Enter seconds: ");
        scanf("%d", &seconds);

        total_seconds = hours * 3600 + minutes * 60 + seconds;
        printf("%d hours, %d minutes, %d seconds = %d total seconds\\n",
               hours, minutes, seconds, total_seconds);
    }
    else if (choice == 2)
    {
        printf("Enter total seconds: ");
        scanf("%d", &total_seconds);

        hours = total_seconds / 3600;
        minutes = (total_seconds % 3600) / 60;
        seconds = total_seconds % 60;

        printf("%d total seconds = %d hours, %d minutes, %d seconds\\n",
               total_seconds, hours, minutes, seconds);
    }
    else
    {
        printf("Invalid choice!\\n");
    }

    return 0;
}