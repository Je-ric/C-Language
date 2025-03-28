#include<conio.h>
#include<stdio.h>

void main(){
	clrscr();
	int numArray[100];
	int i, sum = 0,n;
	int *ptr;

	printf("How many to add: ");
	scanf("%d",&n);
	printf("\nEnter elements : ");
	for (i = 0; i < n; i++)
	scanf("%d", &numArray[i]);
	ptr = numArray; /*a=&a[0] */

	for (i = 0; i < n; i++) {
		sum = sum + *ptr;
		ptr++;
	}
	printf("The sum of array elements : %d", sum);
	getch();
}
