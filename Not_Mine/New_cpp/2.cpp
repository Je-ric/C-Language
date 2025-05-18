#include <stdio.h>

int main()
{
    int choice;
    float amount, converted;

    // Exchange rates (example values)
    float usd_to_eur = 0.85;
    float usd_to_gbp = 0.75;
    float usd_to_jpy = 110.0;

    printf("CURRENCY CONVERTER\n");
    printf("1. USD to EUR\n");
    printf("2. USD to GBP\n");
    printf("3. USD to JPY\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    printf("Enter amount in USD: ");
    scanf("%f", &amount);

    switch (choice)
    {
    case 1:
        converted = amount * usd_to_eur;
        printf("%.2f USD = %.2f EUR\n", amount, converted);
        break;
    case 2:
        converted = amount * usd_to_gbp;
        printf("%.2f USD = %.2f GBP\n", amount, converted);
        break;
    case 3:
        converted = amount * usd_to_jpy;
        printf("%.2f USD = %.2f JPY\n", amount, converted);
        break;
    default:
        printf("Invalid choice!\n");
    }

    return 0;
}