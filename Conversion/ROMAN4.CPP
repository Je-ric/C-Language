#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void decimalToRoman(int num) {
    int decimalValues[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char *romanNumerals[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    int i = 0;
    while (num > 0) {
        while (num >= decimalValues[i]) {
            printf("%s", romanNumerals[i]);
            num -= decimalValues[i];
        }
        i++;
    }
}


int romanToDecimal(const char *roman) {
    int decimalValues[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char *romanNumerals[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    int decimal = 0;
    int i = 0;
    while (*roman) {
        for (i = 0; i < 13; i++) {
            if (strncmp(roman, romanNumerals[i], strlen(romanNumerals[i])) == 0) {
                decimal += decimalValues[i];
                roman += strlen(romanNumerals[i]);
                break;
            }
        }
    }
    return decimal;
}

int main() {
	system("cls");
    int choice;
    printf("1. Decimal to Roman\n");
    printf("2. Roman to Decimal\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        int decimal;
        printf("Enter a decimal number: ");
        scanf("%d", &decimal);
        printf("Roman numeral: ");
        decimalToRoman(decimal);
    } else if (choice == 2) {
        char roman[100];
        printf("Enter a Roman numeral: ");
        scanf("%s", roman);
        printf("Decimal number: %d", romanToDecimal(roman));
    } else {
        printf("Invalid choice.");
    }

    return 0;
}
