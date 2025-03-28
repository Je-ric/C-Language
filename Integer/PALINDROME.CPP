#include<conio.h>
#include<stdio.h>
void main(){
	clrscr();
	int N, M, i, C=0;
	printf("Reverse a number and to check if it's a palindrome number\n");
	printf("Enter a number: ");
	scanf("%d", &N);
	M=N;
	while(M>0){
		i = M%10;
		M = M/10;
		C = C*10+i;
		}
	printf("\nReverse Number of %d is %d", N, C);
	if(C==N){
		printf("\n%d is a palindrome number", N);}
	else{
		printf("\n%d is not a palindrome number", N);}
	getch();
}
