#include <stdio.h>

int main()
{
    int choice;
    float speed, converted;

    printf("SPEED CONVERTER\\n");
    printf("1. km/h to m/s\\n");
    printf("2. m/s to km/h\\n");
    printf("3. mph to km/h\\n");
    printf("4. km/h to mph\\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter speed in km/h: ");
        scanf("%f", &speed);
        converted = speed * 5 / 18; // km/h to m/s
        printf("%.2f km/h = %.2f m/s\\n", speed, converted);
        break;

    case 2:
        printf("Enter speed in m/s: ");
        scanf("%f", &speed);
        converted = speed * 18 / 5; // m/s to km/h
        printf("%.2f m/s = %.2f km/h\\n", speed, converted);
        break;

    case 3:
        printf("Enter speed in mph: ");
        scanf("%f", &speed);
        converted = speed * 1.60934; // mph to km/h
        printf("%.2f mph = %.2f km/h\\n", speed, converted);
        break;

    case 4:
        printf("Enter speed in km/h: ");
        scanf("%f", &speed);
        converted = speed / 1.60934; // km/h to mph
        printf("%.2f km/h = %.2f mph\\n", speed, converted);
        break;

    default:
        printf("Invalid choice!\\n");
    }

    return 0;
}
