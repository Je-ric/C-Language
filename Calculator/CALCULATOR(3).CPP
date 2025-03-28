#include<stdio.h>
#include<conio.h>

double computeSum(double a,double b){
	return a+b;
	}
double computeDifference(double a,double b){
	return a-b;
	}
double computeProduct(double a,double b){
	return a*b;
	}
double computeQuotient(double a,double b){
	return a/b;
	}
int computeQuotientr(int a,int b){
	return a/b;
	}
int computeRemainder(int a,int b){
	return a%b;
	}
void displayTotal(double a,double b,char sign){
	double result; double rmdr;

switch(sign){
	case '+':
	case '1':
		result=computeSum(a,b);
		printf("Sum of %.2lf and %.2lf is: %.2f",a,b,result);
		break;
	case '-':
	case '2':
		result=computeDifference(a,b);
		printf("Difference of %.2lf and %.2lf is: %.2f",a,b,result);
		break;
	case '*':
	case '3':
		result=computeProduct(a,b);
		printf("Product of %.2lf and %.2lf is: %.2f",a,b,result);
		break;
	case '/':
	case '4':
		result=computeQuotient(a,b);
		printf("Quotient of %.2lf and %.2lf is: %.2lf",a,b, result);
		rmdr=computeQuotientr(a,b);
		printf("\nQuotient of %.2lf and %.2lf is: %.2lf ",a,b,rmdr);
		rmdr=computeRemainder(a,b);
		printf("Remainder of %.2lf",rmdr);
		break;
       default:
		printf ("Select from Menu");
    }}
int main(){
	double a,b;
	double result,rmdr;
	char sign;
	char choice;
again:
	clrscr();
	printf("[Calculator Using Function and Switch Case]");
	printf("\nMenu\n");
	printf("Select [1] or [+] for Sum\n");
	printf("Select [2] or [-] for Difference\n");
	printf("Select [3] or [*] for Product\n");
	printf("Select [4] or [/] for Quotient\n");
	printf("Select operator: ");
	scanf(" %c",&sign);
	printf("Enter 1st number: ");
	scanf("%lf",&a);
	printf("Enter 2nd number: ");
	scanf("%lf",&b);
		if(sign == '/' || sign == '4' && a==0){
		printf("Zero is'nt allowed\n");
		printf("Enter another value for 1st number: ");
		scanf ("%lf",&a);
		}
		if(sign == '/' || sign == '4' && b==0){
		printf("Zero is'nt allowed\n");
		printf("Enter another value for 2nd number: ");
		scanf ("%lf",&b);
		}
	displayTotal(a,b,sign);

stop:
	printf ("\nTry again? [Y/N]: ");
	scanf (" %c", &choice);
	if(choice=='Y'|| choice=='y'){
		goto again;
		}
	else if(choice=='N'|| choice=='n'){
		}
	else{
		goto stop;
		}
	getch();
	return 0;
	}
