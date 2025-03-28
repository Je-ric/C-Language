#include<stdio.h>
#include<conio.h>
int main(){
	clrscr();
	int array[100], position, c, n, value;

	printf("Enter the number of elements in array\n");
	scanf("%d", &n);
	printf("Enter %d elements\n", n);

	for (c = 0; c < n; c++)
	scanf("%d", &array[c]);

	printf("Enter the location where you wish to insert an element: ");
	scanf("%d", &position);

	printf("Enter the value to insert: ");
	scanf("%d", &value);

	for (c = n - 1; c >= position - 1; c--)
		array[c+1] = array[c];

		array[position-1] = value;

	printf("Resultant array is: ");

	for (c = 0; c <= n; c++)
	printf("%d ", array[c]);
	getch();
	return 0;
}
