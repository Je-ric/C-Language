#include <stdio.h>
#include<conio.h>
#include <string.h>

int main() {
	clrscr();
    char first_name[100][100];
    char middle_initial[100][2];
    char last_name[100][100];
    char middle_name[100];
    int num_persons = 0;
    char input;

    do {
	printf("Person #%d:\n", num_persons + 1);

	printf("First Name: ");
	gets(first_name[num_persons]);

	printf("Middle Name: ");
	gets(middle_name);

	if (strlen(middle_name) > 1) {

	middle_initial[num_persons][0] = middle_name[0];
	middle_initial[num_persons][1] = '\0';
	}

	printf("Last Name: ");
	gets(last_name[num_persons]);

	num_persons++;

	printf("Do you want to enter again? (Y/N) ");
	scanf(" %c", &input);
	getchar();
    } while (input == 'Y' || input == 'y');

    // Sort the names in descending order based on the first name using the bubble sort technique
    int i, j;
    char temp[100];
    for (i = 0; i < num_persons - 1; i++) {
	for (j = 0; j < num_persons - i - 1; j++) {
	    if (strcmp(first_name[j], first_name[j + 1]) < 0) {
		strcpy(temp, first_name[j]);
		strcpy(first_name[j], first_name[j + 1]);
		strcpy(first_name[j + 1], temp);

		strcpy(temp, middle_initial[j]);
		strcpy(middle_initial[j], middle_initial[j + 1]);
		strcpy(middle_initial[j + 1], temp);

		strcpy(temp, last_name[j]);
		strcpy(last_name[j], last_name[j + 1]);
		strcpy(last_name[j + 1], temp);
	    }
	}
    }

    // Print all the inputted names after sorting
    printf("\nPersons:\n");
    for (i = 0; i < num_persons; i++) {
	printf("%s %s. %s\n", first_name[i], middle_initial[i], last_name[i]);
    }
    getch();
    return 0;
}
