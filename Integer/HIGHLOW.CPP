#include<stdio.h>
#include<conio.h>
void main(){
	clrscr();
	int N, M, i, C=0, D=9;
	printf("Enter value: ");
	scanf("%d", &N);
	M=N;
	while(M > 0){
	i = M % 10;
	M = M / 10;
	if(C < i) { C = i; }
	if(D > i) { D = i; }
	}
	printf("\n Greatest digit is %d and Smallest digit is %d", C, D);
	getch();
}