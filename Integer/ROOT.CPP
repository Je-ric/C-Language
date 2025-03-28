#include<stdio.h>
#include<conio.h>

double cubeRoot(double n){
	double i, precision = 0.000001;
	for(i = 1; (i*i*i) <= n; ++i);   //Integer part

	for(--i; (i*i*i) < n; i += precision);  //Fractional part
	return i;
	}

double squareRoot(double n){
	double i, precision = 0.000001;
	for(i = 1; (i*i) <= n; ++i);   //Integer part

	for(--i; (i*i) < n; i += precision);  //Fractional part
	return i;
	}


int main() {
	clrscr();
	int n,type;
	printf("[1] Square Root\n[2] Cube Root\n");
	printf("Option: ");
	scanf("%d",&type);

	switch(type){
	case 1:
		printf("Enter a number: ");
		scanf("%d",&n);
		printf("Square root of %d = %lf", n, squareRoot(n));
	break;
	case 2:
		printf("Enter a number: ");
		scanf("%d",&n);
		printf("Cube root of %d = %lf\n", n, cubeRoot(n));
	break;
	default: clrscr(); printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t  Invalid"); }
	getch();
	return 0;
}