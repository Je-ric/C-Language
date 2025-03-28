#include<stdio.h>
#include<conio.h>
void main(){  int a,p,i,n,M,ppcm;
	do{	clrscr();
		printf("\t\tFinding PPCM of n numbers");
		printf("\n\nInput n: ");
		scanf("%d",&n);
	}while(n<2);
	printf("Input number: ");
	scanf("%d",&a);
	p=a;i=2;
	do{
		printf("Input number: ");
		scanf("%d",&a);
		M=p*a;
		while(p!=a){
			if(p>a) p=p-a;
			else a=a-p;
		}
	p=M/a;
	i=i+1;
	}while(i<=n);
	printf("\nPPCM of this %d numbers = %d",n,p);
	getch();

}
