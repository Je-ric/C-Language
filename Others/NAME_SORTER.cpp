#include <stdio.h>
#include <string.h>

#define MAX_PERSONS 10
#define MAX_NAME_LENGTH 50

int main() {
    char persons[MAX_PERSONS][3][MAX_NAME_LENGTH];
    char first_name[MAX_NAME_LENGTH], middle_name[MAX_NAME_LENGTH], last_name[MAX_NAME_LENGTH], ans;
    int i, j, num_persons;

    num_persons = 0;
    do {
        printf("Person #%d:\n", num_persons + 1);

        printf("First Name: ");
        scanf("%s", first_name);

        printf("Middle Name (Leave blank if none): ");
        scanf("%s", middle_name);

        printf("Last Name: ");
        scanf("%s", last_name);

        // Concatenate the names into full name format
        strcpy(persons[num_persons][0], first_name);
        if (strlen(middle_name) > 0) {
            persons[num_persons][1][0] = middle_name[0];
            persons[num_persons][1][1] = '.';
            persons[num_persons][1][2] = '\0';
        } else {
            persons[num_persons][1][0] = '\0';
        }
        strcpy(persons[num_persons][2], last_name);

        num_persons++;

        printf("Do you want to enter again? (Y/N) ");
        scanf(" %c", &ans);
    } while (ans == 'Y' || ans == 'y');

    // Sort the names in descending order based on the first name using bubble sort
    for (i = 0; i < num_persons - 1; i++) {
        for (j = 0; j < num_persons - i - 1; j++) {
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
    printf("Sorted Person(s):\n");
    for (i = 0; i < num_persons; i++) {
        printf("%s %s %s\n", persons[i][0], persons[i][1], persons[i][2]);
    }

    return 0;
}
