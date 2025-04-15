#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	clrscr();
	char ch;
	int Count_word = 0, Count_char = 0;

	FILE *file;
	file = fopen("C:/C/act9.txt", "r");
	if(file == NULL){
		printf("File Not Found");
		getch();
		exit(1);
	}

	while((ch = fgetc(file)) != EOF){
		if(ch == ' ' || ch == '\n' || ch == '\t'){
			Count_word++;
		}
		Count_char++;
	}

	fclose(file);

	printf("The files are:\n\n");

	file = fopen("C:/C/act9.txt", "r");

	if(file == NULL){
		printf("File Not Found");
		getch();
		exit(1);
	}

	while((ch = fgetc(file)) != EOF){
		printf("%c", ch);
	}

	fclose(file);

	printf("\n\nTotal number of Words: %d\n", Count_word);
	printf("Total number of Characters: %d\n", Count_char);
	getch();
	return 0;
}
