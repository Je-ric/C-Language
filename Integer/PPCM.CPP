#include<stdio.h>
#include<conio.h>
void main(){  int a,b,x,y,M,ppcm;
	do{	clrscr();
		printf("\t\tFinding PPCM of 2 numbers");
		printf("\n\nInput value a&b: ");
		scanf("%d",&a);
		printf("Input value a&b: ");
		scanf("%d",&b);
		x=a;y=b;M=a*b;
	}while(a<=0||b<=0);
	while(a!=b){
		if(a>b) a=a-b;
		else b=b-a;
	}
	ppcm=M/a;
	printf("\nPPCM(%d,%d)=%d",x,y,ppcm);
	getch();

}
