#include<stdio.h>
#include<conio.h>
void main(){
	clrscr();
	int input,type;
	float result;
	printf("Enter Value to convert: ");
	scanf("%d",&input);
	printf("Option\n");
	printf("Select [1] if Gram converts to Kilogram, Pound and Ounce\n");
	printf("Select [2] if Kilogram converts to Ounce, Gram and Pound\n");
	printf("Select [3] if Pound converts to Gram, Ounce and Kilogram\n");
	printf("Select [4] if Ounce converts to Pound, Kilogram and Gram\n");
	printf("Selected Converter: ");
	scanf("%d",&type);
	clrscr();

	if(type == 1){
		result = input * 2.205;
		printf("The value of Kilogram to pounds is %.2f",result);
		}
	getch();
	}
