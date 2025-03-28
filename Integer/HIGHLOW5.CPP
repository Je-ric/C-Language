#include<stdio.h>
#include<conio.h>
int main(){
	clrscr();
	int a, b, c, big, small;
	printf("\nEnter 3 numbers: \n");
	scanf("%d %d %d", &a, &b, &c);

	big = (a > b && a > c ? a : b > c ? b : c);
	small = (a < b && a < c ? a : b < c ? b : c);
	if(big==small){
		printf("They all have the same value");
		}
	printf("\nThe biggest number is: %d", big);
	printf("\nThe smallest number is: %d", small);
	getch();
	return 0;
}
