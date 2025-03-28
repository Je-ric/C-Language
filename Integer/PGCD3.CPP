#include<stdio.h>
#include<conio.h>
#define MAX 100

void main(){  int i, n, pgcd, a[MAX];
	do{	clrscr();
		printf("\t\tFinding PGCD of n numbers");
		printf("\n\nInput n: ");
		scanf("%d",&n);
	}while(n<2||n>MAX);
//==========input array
	for(i=0;i<n;i++){
		printf("[%d]= ",i);
		scanf("%d",&a[i]);
	}

	pgcd=a[0];
	for(i=1;i<n;i++)
		while(pgcd!=a[i]){
			if(pgcd>a[i])	pgcd-=a[i];
			else	a[i]-=pgcd;
		}
	printf("\nPGCD of this %d numbers = %d",n,pgcd);
	getch();

}