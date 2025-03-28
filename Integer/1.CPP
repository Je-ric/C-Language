//Jeric J. Dela Cruz
//BSIT_1-2
#include<stdio.h>
#include<conio.h>

void main(){
	clrscr ();
	int total;
	int num1;
	float num2;
	double num3;
	printf("Enter first number: ");
	scanf("%d",&num1);
	printf("Enter second number: ");
	scanf("%f" ,&num2);
	printf("Enter third number: ");
	scanf("%lf" ,&num3);

	total = num1 + num2;
	printf("\nThe sum of first number and second number is %d\n", total);
	total = num2 - num3;
	printf("The difference of second number and third number is %d\n", total);
	total = num1*num2*num3;																																												;
	printf("The product of first, second and third number is %d\n", total);
	getch ();
}






