#include<conio.h>
#include<stdio.h>

void main(){
	clrscr();
	int n, a[100], i;
	printf("Enter number to input: ");
	scanf("%d",&n);

	printf("Enter no.");
	for(i=0;i < n;i++)
	scanf("%d",&a[i]);
/*storing each no in array*/

	printf("Reverse no is : ");
	for(i=n-1;i >=0;i--)
	printf("%d ",a[i]);
/*Printing array in reverse order*/
	getch();
}