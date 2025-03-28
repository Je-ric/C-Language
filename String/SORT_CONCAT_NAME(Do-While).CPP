#include<stdio.h>
#include<conio.h>
#include<string.h>

void Concatenate(char first[], char middle[], char last[], char full[]){
	strcpy(full, first);
	strcat(full, " ");

	if(strlen(middle) > 0){
		strncat(full, middle, 1);
		strcat(full, ". ");
		}
	strcat(full, last);
}

void Sort(char names[][100], int persons){
	for (int i=0; i<persons; i++){
		for (int j=0; j<persons; j++){
			if (strcmp(names[j], names[j+1]) < 0){
				char temp[100];
				strcpy(temp, names[j]);
				strcpy(names[j], names[j+1]);
				strcpy(names[j+1], temp);
			}
		}
	}
}

int main() {
	clrscr();
	char again;
	char first[100], middle[100], last[100], full[100];
	char names[100][100];
	int persons = 0;

    do {//Input
	printf("Person #%d:\n", persons + 1);

	printf("First Name: ");
	gets(first);

	printf("Middle Name: ");
	gets(middle);

	printf("Last Name: ");
	gets(last);

	//Merge
	Concatenate(first, middle, last, full);

	strcpy(names[persons], full);
	persons++;

	printf("\nDo you want to enter again? (Y/N) ");
	scanf(" %c",&again);
	getchar();
	}while (again == 'Y' || again == 'y');

	//Sort
	Sort(names, persons);

	//Output
	printf("\nPerson(s):\n");
	for (int i=0; i<persons; i++) {
		printf("%s\n", names[i]);
		}
	getch();
	return 0;
}

