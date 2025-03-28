#include<stdio.h>
#include<conio.h>
void main(){  int a,p,i,n,pgcd;
	do{	clrscr();
		printf("\t\tFinding PGCD of n numbers");
		printf("\n\nInput n: ");
		scanf("%d",&n);
	}while(n<2);
	printf("Input number: ");
	scanf("%d",&a);
	p=a;i=2;
	do{
		printf("Input number: ");
		scanf("%d",&a);
		while(p!=a){
			if(p>a) p=p-a;
			else a=a-p;
		}
	i++  ;
	}while(i<=n);
	printf("\nPGCD of this %d numbers = %d",n,p);
	getch();

}

