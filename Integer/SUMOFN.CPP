#include <stdio.h>
#include<conio.h>
int main(){
	clrscr();
	int n, sum = 0, c, value;
	printf("How many numbers you want to add? ");
	scanf("%d", &n);
	printf("Enter %d integers\n", n);
	for (c = 1; c <= n; c++){
		scanf("%d", &value);
		sum = sum + value;
	}
	printf("Sum of the integers = %d\n", sum);
	getch();
	return 0;
}
