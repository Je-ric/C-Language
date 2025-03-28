#include<stdio.h>
#include<conio.h>
#define MAX 50
void main(){  int i, p, n, ppcm, a[MAX];
	do{	clrscr();
		printf("\t\tFinding PPCM of n numbers");
		printf("\n\nInput n: ");
		scanf("%d",&n);
	}while(n<2||n>MAX);
//==========input array
	for(i=0;i<n;i++){
		printf("[%d]= ",i);
		scanf("%d",&a[i]);
	}

	ppcm=a[0];
	for(i=1;i<n;i++){
		p=ppcm*a[i];
		while(ppcm!=a[i]){
			if(ppcm>a[i])	ppcm-=a[i];
			else	a[i]-=ppcm;
		}
		ppcm=p/a[i];
	}
	printf("\nPGCD of this %d numbers = %d",n,ppcm);
	getch();

}