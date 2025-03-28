#include<stdio.h>
#include<conio.h>
void main(){
	clrscr();
	int i, begin, end, sum = 0,type;
	printf("[1] Even\n[2] Odd\n");
	printf("Option: ");
	scanf("%d",&type);
	switch(type){
	case 1:
	printf("Program for sum of even numbers.\n");
	printf("Enter the Beginning of the No.: ");
	scanf("%d", &begin);
	printf("Enter the Ending of the No.: ");
	scanf("%d", &end);
		i = begin;
		if((begin % 2) == 1)
		i = begin + 1;
	for(;i<=end;i += 2)
		{
		sum = sum + i;
		}
	printf("The sum of even numbers between %d and %d is: %d", begin, end, sum);
	break;
	case 2:
	printf("Program for sum of even numbers.\n");
	printf("Enter the Beginning of the No.: ");
	scanf("%d", &begin);
	printf("Enter the Ending of the No.: ");
	scanf("%d", &end);
		i = begin;
		if((begin % 2) == 1)
		i = begin + 1;
	for(;i<=end;i += 2)
		{
		sum = sum + i;
		}
	printf("The sum of even numbers between %d and %d is: %d", begin, end, sum);
	break;
	default: printf("Invalid");
	}
	getch();
}