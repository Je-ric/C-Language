#include <stdio.h>
#include<conio.h>
int main(){
	clrscr();
	int n, i, d, a[100], b[100];

	printf("Enter the number of elements in array: ");
	scanf("%d", &n);

	for (i=0; i<n ;i++)
	scanf("%d", &a[i]);

	for (i=n-1,d=0; i >= 0; i--, d++)
	b[d] = a[i];

	for (i = 0; i < n; i++)
	a[i] = b[i];

	printf("Reverse array is\n");
	for (i= 0; i< n; i++)
	printf("%d ", a[i]);
	getch();
	return 0;
}