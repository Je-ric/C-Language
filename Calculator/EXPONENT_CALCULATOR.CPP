#include<stdio.h>
#include<conio.h>
int main(){
	clrscr();
	int type,base,exp,i;
	double result=1;
	printf("\n[1] Computation of the base and it's exponent (base^exp)\n");
	printf("[2] N Squared\n");
	printf("[3] N Cube\n");
	printf("Select: ");
	scanf("%d",&type);

	switch(type){
	case 1:	clrscr();
		printf("\n[1] Computation of the base and it's exponent (base^exp)\n");
		printf("\nEnter base number: ");
		scanf("%d", &base);
		printf("Enter exponent number: ");
		scanf("%d", &exp);
		for(i=1; i<=exp; i++){
			result*=base;
		}
		printf("%d^%d = %.0f" ,base, exp, result);
	break;
	case 2: clrscr();
		printf("\n[2] N Squared\n");
		printf("\nEnter base number: ");
		scanf("%d", &base);
		for(i=0; i < 2; i++){
			result*=base;
		}
		printf("%d = %.0f" ,base, result);
	break;
	case 3: clrscr();
		printf("\n[3] N Cube\n");
		printf("\nEnter base number: ");
		scanf("%d", &base);
		for (i=0; i<3; i++){
			result=base*base;
			result*=base;
		}
		printf("%d = %.0f" ,base, result);
	break;
	}
	getch();
	return 0;
}