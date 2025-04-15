#include<stdio.h>
#include<conio.h>

void leapYear(int year) {
    if(year % 400 == 0)
        printf("%d is a leap year.\n", year);
    else if(year % 100 == 0)
        printf("%d is not a leap year.\n", year);
    else if(year % 4 == 0)
        printf("%d is a leap year.\n", year);
    else
        printf("%d is not a leap year.\n", year);
}

void ageCategory(int age) {
    if(age >= 0 && age <= 2)
        printf("Still a Baby");
    else if(age >= 3 && age <= 12)
        printf("Children");
    else if(age >= 13 && age <= 17)
        printf("Teenager");
    else if(age >= 18 && age <= 26)
        printf("Young Adult");
    else if(age >= 27 && age <= 39)
        printf("Middle Age");
    else if(age >= 40 && age <= 79)
        printf("Grandparents");
    else
        printf("Wow... You're old!");
}

void voteEligibility(int age) {
    if (age < 18) {
        printf("Sorry, You are not eligible to caste your vote.\n");
        printf("You would be able to caste your vote after %d years.\n", 18 - age);
    } else if (age >= 18) {
        printf("Congratulations! You are eligible for casting your vote.\n");
    } else {
        printf("Invalid Input");
    }
}


void Month(int month) {
    switch(month) {
        case 1:
            printf("January: Month has 31 days.\n");
            break;
        case 2:
            printf("February: The 2nd month is February and has 28 days.\n");
            printf("\t  In leap year it has 29 days.\n");
            break;
        case 3:
            printf("March: Month has 31 days.\n");
            break;
        case 4:
            printf("April: Month has 30 days.\n");
            break;
        case 5:
            printf("May: Month has 31 days.\n");
            break;
        case 6:
            printf("June: Month has 30 days.\n");
            break;
        case 7:
            printf("July: Month has 31 days.\n");
            break;
        case 8:
            printf("August: Month has 31 days.\n");
            break;
        case 9:
            printf("September: Month has 30 days.\n");
            break;
        case 10:
            printf("October: Month has 31 days.\n");
            break;
        case 11:
            printf("November: Month has 30 days.\n");
            break;
        case 12:
            printf("December: Month has 31 days.\n");
            break;
        default:
            printf("Invalid input. Please enter a number between 1 and 12.\n");
    }
}

void temperatureCategory(int temp) {
    if(temp < 0) {
        printf("That is a Freezing Weather\n");
    } else if(temp >= 0 && temp <= 10) {
        printf("That is a Very cold Weather\n");
    } else if(temp >= 11 && temp <= 20) {
        printf("That is a Cold Weather\n");
    } else if(temp >= 21 && temp < 30) {
        printf("That is a Normal Weather\n");
    } else if(temp >= 30 && temp <= 40) {
        printf("That is a Hot weather\n");
    } else {
        printf("That is a Very hot Weather\n");
    }
}

int main() {
    clrscr();
    char choice;
    int option, value;

    do {
        printf("\nChoose an option:\n");
        printf("1. Check leap year\n");
        printf("2. Check age category\n");
        printf("3. Check vote eligibility\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &option);

        switch(option) {
            case 1:
                printf("Enter a year to check if it is a leap year: ");
                scanf("%d", &value);
                leapYear(value);
                break;
            case 2:
                printf("Input your age: ");
                scanf("%d", &value);
                ageCategory(value);
                break;
            case 3:
                printf("Input your age: ");
                scanf("%d", &value);
                voteEligibility(value);
                break;
           case 4:
                printf("Enter a month (1-12) to check: ");
                scanf("%d", &value);
                Month(value);
                break;
            case 5:
                printf("Enter temperature: ");
                scanf("%d", &value);
                temperatureCategory(value);
                break;
            case 6:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice\n");
        }

        printf("\nDo you want to continue (Y/N)? ");
        scanf(" %c", &choice);

    } while(choice == 'Y' || choice == 'y');

    getch();
    return 0;
}