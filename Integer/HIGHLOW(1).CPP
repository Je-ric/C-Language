#include<stdio.h>
#include<conio.h>
void main(){
	clrscr();
	printf("[Determine the Greatest or Smallest using Conditional Operator]\n");
	int type;
	char choice,c;
	int A,B,C;
	printf("\nMenu\n");
	printf("[1] Greatest Number\n");
	printf("[2] Smallest Number\n");
	printf("Option: ");
	scanf("%d" ,&type);

	if(type==1){
		printf("[1] Greatest Number\n");
		printf("Enter a value for A:");
		scanf("%d" ,&A);
		printf("Enter a value for B:");
		scanf("%d" ,&B);
		printf("Enter a value for C:");
		scanf("%d" ,&C);

	if (A>B && A>C)
		printf("The greatest value is %d.",A);
	else if (B>A && B>C)
		printf("The greatest value is %d.",B);
	else if (C>B && C>A)
		printf("The greatest value is %d.",C);
	else if (A<B && A<C)
		printf("The greatest value are %d and %d." ,B,C);
	else if (C<A && C<B)
		printf("The greatest value are %d and %d." ,A,B);
	else if (B<C && B<A)
		printf("The greatest value are %d and %d." ,A,C);
	else if(A==B && B==C && C==A)
		printf("%d,%d and %d have the same value.",A,B,C);
	else
		printf("Invalid Input");



	}

	else if(type==2){
		printf("[2] Lowest Number\n");
		printf("Enter the value of A: ");
		scanf("%d" ,&A);
		printf("Enter the value of B: ");
		scanf("%d" ,&B);
		printf("Enter the value of C: ");
		scanf("%d" ,&C);

	if (A<B && A<C)
		printf("The smallest value is %d.",A);
	else if (B<A && B<C)
		printf("The smallest value is %d.",B);
	else if (C<B && C<A)
		printf("The smallest value is %d.",C);
	else if (A>B && A>C)
		printf("The smallest value are %d and %d." ,B,C);
	else if (C>A && C>B)
		printf("The smallest value are %d and %d." ,A,B);
	else if (B>C && B>A)
		printf("The smallest value are %d and %d." ,A,C);
	else if(A==B && B==C && C==A)
		printf("%d,%d and %d have the same value.",A,B,C);
	else
		printf("Invalid Input");
	}
	getch();
}