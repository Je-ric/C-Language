#include<stdio.h>
#include<conio.h>
int main(){
	clrscr();
	printf("[Determine if Positive or Negative and if it's Even or Odd Using Ternary]\n");
	int input;
	printf("Enter a number: ");
	scanf("%d" ,&input);
	input>=1 && (input%2) != 0 ? printf("%d is Positive Odd",input):
	input>=1 && (input%2) == 0 ? printf("%d is Positive Even",input):
	input<0 && (input%2) != 0 ? printf("%d is Negative Odd",input):
	input<0 && (input%2) == 0 ? printf("%d is Negative Even",input):
	input==0 ? printf("%d is neither a Positive nor Negative",input):
	printf("Invalid");
	getch();
	return 0;
}
