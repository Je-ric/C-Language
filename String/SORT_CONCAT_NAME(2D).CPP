#include <stdio.h>
#include <string.h>

int main() {
    char names[100][50], temp[50];
    int i, j, n;
    char first[20], middle[20], last[20];

    printf("Enter number of persons: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nPerson #%d:\n", i+1);

        printf("First Name: ");
        scanf("%s", first);

        printf("Middle Name (initial only): ");
        scanf("%s", middle);

        printf("Last Name: ");
        scanf("%s", last);

        // concatenate the strings

	strcpy(names[i], first);
        strcat(names[i], " ");

        if (strlen(middle) > 0) {
            strcat(names[i], middle);
            strcat(names[i], ". ");
        }

        strcat(names[i], last);
    }
    // sort the names in descending order based on first name
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (strcmp(names[j], names[j+1]) < 0) {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j+1]);
                strcpy(names[j+1], temp);
            }
        }
    }

    // print the sorted names
    printf("\nPersons:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
