#include<stdio.h>
#include<conio.h>
void main(){
	clrscr();
	printf("[Calculator using Conditional Operator]\n\n");
	float total,num1,num2;
	int choice;
	int result,a,b;
	printf("Menu\n");
	printf("[1] Addition\n");
	printf("[2] Multiplication\n");
	printf("[3] Subtraction\n");
	printf("[4] Division\n");
	printf("[5] Modulus\n");
	printf("Enter choice: ");
	scanf("%d" ,&choice);
	printf("\n");

	if (choice == 1){
	printf("[1] Addition\n");
	printf("Enter a number: ");
	scanf("%f" ,&num1);
	printf("Enter a number: ");
	scanf("%f" ,&num2);
	total = num1 + num2;
	printf("Sum = %.2f" ,total);
	}
	else if(choice == 2){
	printf("[2] Multiplication\n");
	printf("Enter a number: ");
	scanf("%f" ,&num1);
	printf("Enter a number: ");
	scanf("%f" ,&num2);
	total = num1 * num2;
	printf("Product = %.2f" ,total);
	}
	else if(choice == 3){
	printf("[3] Subtraction\n");
	printf("Enter a number: ");
	scanf("%f" ,&num1);
	printf("Enter a number: ");
	scanf("%f" ,&num2);
	total = num1 - num2;
	printf("Minus = %.2f" ,total);
	}
	else if(choice == 4){
	printf("[4] Division\n");
	printf("Enter a number: ");
	scanf("%f" ,&num1);
	printf("Enter a number: ");
	scanf("%f" ,&num2);
	total = num1 / num2;
	printf("Divide = %.2f" ,total);
	}
	else if(choice == 5){
	printf("[5] Modulus\n");
	printf("Enter a number: ");
	scanf("%d" ,&a);
	printf("Enter a number: ");
	scanf("%d" ,&b);
	result =a / b;
	result = a % b;
	printf("Division of %d and %d = %d\n",a,b,result);
	printf("Modulo = %d" ,result);
	}
	else{
		printf("ERROR");
	}
	getch();
}

