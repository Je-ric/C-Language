#include<stdio.h>
#include<conio.h>
#include<string.h>

void Concatenate(char first[], char middle[], char last[], char full[]){

	strcpy(full, first);
	strcat(full, " ");

	if (strlen(middle) > 0) {
		char initial[] = { middle[0], '\0' };
		strcat(full, initial);
		strcat(full, ". ");
	}
	strcat(full, last);
}

void Sort(char names[][100], int persons){
	int i, j;
	char temp[100];

	for (i=0; i<persons-1; i++){
		for (j=0; j<persons-i-1; j++) {
			if (strcmp(names[j], names[j+1]) < 0) {
				strcpy(temp, names[j]);
				strcpy(names[j], names[j+1]);
				strcpy(names[j+1], temp);
				}
			}
		}
	}

int main(){
	clrscr();
	char first[100], middle[100], last[100], full[100];
	char names[100][100];
	int persons = 0;
	char again;

	do{
		printf("Person #%d:\n", persons + 1);
		printf("First Name: ");
	       //scanf("%s", first);
	       gets(first);
		printf("Middle Name: ");
		//scanf("%s", middle);
		gets(middle);
		printf("Last Name: ");
		//scanf("%s", last);
		gets(last);

	Concatenate(first, middle, last, full);

	strcpy(names[persons], full);
	persons++;

	printf("\nDo you want to enter again? (Y/N): ");
	scanf(" %c", &again);
	getchar();
	}while(again == 'Y' || again == 'y');

	Sort(names, persons);

	printf("\nPersons:\n");
	for (int i=0; i<persons; i++) {
		printf("%s\n", names[i]);
	}
	getch();
	return 0;
}
