#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

void deleteword(char *word){
	FILE *input = fopen("C:/C/act10a.txt", "r");
	FILE *output = fopen("C:/C/bago.txt", "w");

	if(input == NULL || output == NULL){
		printf("ERROR.\n");
		getch();
		exit(1);
	}

	char line[100];
	while(fgets(line, sizeof(line), input) != NULL){
		int lineLen = strlen(line);
		int wordLen = strlen(word);
		int i = 0;
		int j = 0;

	while(i<lineLen){
		if(line[i] == word[j]){
			i++;
			j++;
			if(j == wordLen){
				j=0;
			}
		}
		else{
			if(j>0){
				for(int k=0; k<j; k++){
					fprintf(output, "%c", word[k]);
				}
			j = 0;
			}
			fprintf(output, "%c", line[i]);
			i++;
		}
	}
		fprintf(output, "");
	}

	fclose(input);
	fclose(output);
}

int main() {
	clrscr();
	char word[100];

	printf("The quick brown fox jumps over the lazy dog.");
	printf("\nDelete word: ");
	scanf("%s",&word);

	deleteword(word);

	printf("Please see the file to verify the result!\n");

	return 0;
}
