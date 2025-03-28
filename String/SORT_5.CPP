#include<stdio.h>
#include<conio.h>
#include<string.h>

#define MAX_PERSONS 10
#define MAX_NAME_LENGTH 50

int main() {
    char persons[20][3][MAX_NAME_LENGTH];
    char firstname[MAX_NAME_LENGTH];
    char middlename[MAX_NAME_LENGTH];
    char lastname[MAX_NAME_LENGTH];
    char ans;
    int i, j, n = 0;

    clrscr();
    do {
	printf("\nPerson #%d:\n", n + 1);
	printf("First Name: ");
	gets(firstname);
	printf("Middle Name: ");
	gets(middlename);
	printf("Last Name: ");
	gets(lastname);

	// Concatenate the names into full name format
	strcpy(persons[n][0], firstname);
	if (strlen(middlename) > 0) {
	    persons[n][1][0] = middlename[0];
	    persons[n][1][1] = '.';
	    persons[n][1][2] = '\0';
	} else {
	    persons[n][1][0] = '\0';
	}
	strcpy(persons[n][2], lastname);

	n++;

	printf("Do you want to enter again? (Y/N) ");
	scanf(" %c", &ans);
	getchar();
    }while (ans == 'Y' || ans == 'y');

    // Sort the names in descending order based on the first name
    for (i = 0; i < n - 1; i++) {
	for (j = 0; j < n - i - 1; j++) {
	    if (strcmp(persons[j][0], persons[j+1][0]) < 0) {
		char temp[MAX_NAME_LENGTH];
		strcpy(temp, persons[j][0]);
		strcpy(persons[j][0], persons[j+1][0]);
		strcpy(persons[j+1][0], temp);

		strcpy(temp, persons[j][1]);
		strcpy(persons[j][1], persons[j+1][1]);
		strcpy(persons[j+1][1], temp);

		strcpy(temp, persons[j][2]);
		strcpy(persons[j][2], persons[j+1][2]);
		strcpy(persons[j+1][2], temp);
	    }
	}
    }

    // Print the sorted names
    printf("Person(s):\n");
    for (i = 0; i < n; i++){
	printf("%s %s %s\n", persons[i][0], persons[i][1], persons[i][2]);
    }

    getch();
    return 0;
}
